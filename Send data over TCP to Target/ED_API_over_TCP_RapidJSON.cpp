#include "stdafx.h"
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <Winsock2.h>
#include <iostream>
#include <string>
#include <windows.h>
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include "rapidjson/filereadstream.h"
#include "rapidjson/error/en.h"

using namespace rapidjson;

#pragma comment(lib, "ws2_32.lib")

int main()
{
	std::cout << "Hello world!" << std::endl;
	std::cout << "ED-Warthog-Target-Script 3.x : Status.json Flags Addon" << std::endl;

		//Create an Empty string to be able to save the Status.json string later
	std::string jsonStr_Backup;

		//Create a buffer where FileReadStream can store the data 
	char readBuffer[256];

	LOOP:for (;;) {

			//Load the Status.json file using FileReadStream
//		FILE* ifs = fopen("C:/Users/tomdu/Saved Games/Frontier Developments/Elite Dangerous/Status.json", "rb");
		FILE* ifs = fopen("Status.json", "rb");

			//Can't open Status.json File ?
		if (ifs == 0) {
			std::cerr << "Can't open Status.json.This program should be In : /Users/.../Saved Games/Frontier Developments/Elite Dangerous/" << std::endl;
			system("PAUSE");
			return EXIT_FAILURE;
		}

			//Create the RapidJSON Document of Status.json File : status
		FileReadStream isw(ifs, readBuffer, sizeof(readBuffer));
		Document status; // create RapidJSON value
		status.ParseStream(isw);

			//Parse Error ? File Empty ? No Problem, we will read the json file again ;)
		if (status.HasParseError())
		{
			fprintf(stderr, "Error(offset %u): %s\n", (unsigned)status.GetErrorOffset(), GetParseError_En(status.GetParseError()));
			Sleep(100);
			goto LOOP;
		}
		
			//Allocates a memory buffer for writing the whole JSON to be able to compare it below
		StringBuffer buffer;
		Writer<StringBuffer> writer{ buffer };
		status.Accept(writer);

			//Store the allocated memory buffer in a string (jsonStr) to be able to compare it (with jsonStr_Backup) below
			//If they are same, we don't need to do the parsing, and socket stuff
		const std::string jsonStr{ buffer.GetString() };

			//Close the status.json file
		fclose(ifs);
				
			//If the Status.json File content have changed since his last reading : 
			//Parse the File and send the Value(s) we need through TCP to Target
		if (jsonStr != jsonStr_Backup )
		{
				//Backup the New Status.json in a string as jsonStr_Backup
			jsonStr_Backup.assign(jsonStr);
		
				//Retreive Json "Flags" int Value
			int v_Flags = 0;
			if (status.HasMember("Flags")) {
				assert(status["Flags"].IsNumber()); //Flags
				v_Flags = status["Flags"].GetInt();
				//printf("Flags = %d\n", v_Flags);
			}
		
			/*	//Retreive Json "Pips" array Value, we don't use it yet but we will need it later
			if (status.HasMember("Pips")){
				const Value& p = status["Pips"];	//Pips as Array
				assert(p.IsArray());
			//	for (SizeType i = 0; i < p.Size(); i++) { // Uses SizeType instead of size_t
			//		printf("p[%d] = %d\n", i/2, p[i].GetInt());
			//	}
			}*/

				//Display the status.json content in windows console
			if (v_Flags != 0) {
				std::cout << jsonStr << std::endl;
			  //std::cout << "Status.json Backup = " << jsonStr_Backup << std::endl;
			}

			//Clear and minimize the RapidJSON Document of Status.json File : status
			status.SetObject(); 

				//If we are In Game, we can send the Data through Socket TCP to Target
			if (v_Flags != 0) {

					//Since Flags is an int, we convert it to String to be able to send through Socket TCP
				std::string s_Flags = std::to_string(v_Flags);
				const char * c = s_Flags.c_str();

					// Send Data through Socket TCP
				char buf[128];
				sockaddr_in addr;
				WSADATA WSAData;
				WSAStartup(2, &WSAData);
				gethostname(buf, sizeof(buf));
				hostent *server = gethostbyname(buf);
				if (server)
				{
					SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
					if (s != INVALID_SOCKET)
					{
						memcpy(&addr.sin_addr, server->h_addr, server->h_length);
						addr.sin_family = server->h_addrtype;
						addr.sin_port = htons(1000);					// use TCP port 1000, the same as the one in TARGET script
						if (!connect(s, (sockaddr*)&addr, sizeof(addr)))
						{
							*(unsigned short*)buf = 2 + (unsigned short)strlen(c);		// data size = xxx bytes (packet length + data)
							strcpy_s(buf + 2, *(unsigned short*)buf, c);				// c : 8 bytes of data for Flags
							send(s, buf, *(unsigned short*)buf, 0);						// send (packet length + data) bytes of data
						}
						closesocket(s);
					}
				}
				WSACleanup();
				v_Flags = 0;	//Clear Json Flags Value
			}
				//We are not In Game !!!!
			else {
				std::cerr << "Warning : You need to be logged in Elite Dangerous ..." << std::endl;
			}
		}
		Sleep(1000);
	}
	return 0;
}