2018/12/24

ED_API_over_TCP.exe NEED to be placed in the same directory as Status.json and other log/json ED files :
```
\Users\<USER>\Saved Games\Frontier Developments\Elite Dangerous\
```
This exe file is, right now, in beta stage

* You need to use the script provided this branch for using it
* You should get Flags value and time it have been sent to target in the main windows console program
* You should get States change in the Target Script console windows. You can desactivate the meassages in Setting file : DebugFlagsMode 0 instead of 1
* We retreive all the Flags from Status.json files in the script :

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
int s_HUDAnalysis;
int s_NightVision;
