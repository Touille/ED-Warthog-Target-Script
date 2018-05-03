#include "stdafx.h"
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <Winsock2.h>
#include <fstream>
#include <iostream>
#include <string>
#include <json.hpp>
#include <windows.h>
#include <time.h>

using json = nlohmann::json;

#pragma comment(lib, "ws2_32.lib")

int main()
{
	std::cout << "Hello world!" << std::endl;
	std::cout << "ED-Warthog-Target-Script 3.x : Status.json Flags Addon" << std::endl;

	LOOP:for (;;) {
	
		//Load the Stuatus.json file
		std::ifstream ifs("C:/Users/tomdu/Saved Games/Frontier Developments/Elite Dangerous/Status.json");
//		std::ifstream ifs("Status.json");

		if (!ifs.is_open()) {
			std::cerr << "Can't open Status.json.This program should be in : /Users/.../Saved Games/Frontier Developments/Elite Dangerous/" << std::endl;
			system("PAUSE");
			return 0;
		}

		json j; // create JSON value

		try {
			j = json::parse(ifs);
		} 
		catch (json::parse_error &e)
		{
			std::cerr << e.what() << std::endl;
			goto LOOP;
		}

		ifs.close(); //Close the status.json file

		//Verify that "Flags" attribute exists in j
		if (j.find("Flags") == j.end()) {
			std::cerr << "Can't Find Flags in Status.json." << std::endl;
			Sleep(5000);
			goto LOOP;
		}
		
		auto i_Flags = j["Flags"].get<int>(); //Get Those "Flags" Value

		j.clear(); // clear JSON value

		//If In Game do the stuff below
		if (i_Flags != 0) {

			// convert Flags int to String
			std::string s_Flags = std::to_string(i_Flags);
			const char * c = s_Flags.c_str();

			//Display Flags Value & Time In Console
			time_t tim;  //create variable of time_t
			time(&tim); //pass variable tim to time function
			std::cout << "Flags : " << c  << " / " << ctime(&tim) << std::endl;
						
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
						strcpy_s(buf+2, *(unsigned short*)buf, c);					// c : 8 bytes of data
						send(s, buf, *(unsigned short*)buf, 0);						// send (packet length + data) bytes of data
					}
					closesocket(s);
				}
			}
			WSACleanup();
			i_Flags = 0;
		}
		else { //You are not In Game !!!!
			std::cerr << "Warning : You need to be logged in Elite Dangerous ..."<< std::endl;
			//system("PAUSE");
			Sleep(5000);
		}
	Sleep(1000);
	}
return 0;
}