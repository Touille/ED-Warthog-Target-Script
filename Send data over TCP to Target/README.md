06/05/2018

ED_API_over_TCP_RapidJSON.exe NEED to be placed in the same directory as Status.json and other log/json ED files :
```
\Users\....\Saved Games\Frontier Developments\Elite Dangerous\
```
This file is, right now, only for testing purpose: it can crash and don't work for you PLEASE Report Bug

If Someone can help me on this part (C++ stuff) you are welcome :) I'm just starting to learn c++ some day ago ... so the code can have some BIG Noob mistake ....

* You need to use the script provided this branch.
* You can log in game, try deploy hardpoint, deploy cargo scoop, scooping star, turn the ligh on/off, ....
* You should get Flags value and time it have been sent to target in the main windows console program
* You should get States change in the Target Script console windows
* We are now able to retreive all the Flags from Status.json files in the script :

int s_Docked;  
int s_Landed;  
int s_LandingGearDown;  
int s_ShieldUp;  
int s_Supercruise;  
int s_FlightAssistOff;  
int s_HardpointsDeployed;  
int s_InWing;  
int s_LightsOn;  
int s_CargoScoopDeployed;  
int s_SilentRunning;  
int s_ScoopingFuel;  
int s_SrvHandbrake;  
int s_SrvTurret;  
int s_SrvUnderShip;  
int s_SrvDriveAssist;  
int s_FsdMassLocked;  
int s_FsdCharging;  
int s_FsdCooldown;  
int s_LowFuel;  
int s_OverHeating;  
int s_HasLatLong;  
int s_IsInDanger;  
int s_BeingInterdicted;  
int s_InMainShip;  
int s_InFighter;  
int s_InSRV;