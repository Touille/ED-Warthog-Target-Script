# Elite Dangerous Warthog Target Script (HCS Keys Binding) 3.0.5b 2018/05/07

![ED LOGO](https://www.elitedangerous.com/_assets/img/logo-elite-dangerous.png)


***Special thanks go out to Aussiedroid, DarKcyde0, WraithMG11235, Synkc, Solarfly and Farinhir***

---
- [x] Complete
- [ ] Implemented / Need More Test
---
## INSTALATION:

* __All files from Thrustmaster Warthog Script folder need to be in the same folder.__ The Warthog Script can be run from any location. 
* __Copy__ the Elite Dangerous Binds Profile __ED+HCS V3.X.XX.XX.3.0.binds__ from __Default Keybinds - Elite Dangerous Folder__ to:
```
\Users\<User>\AppData\Local\Frontier Developments\Elite Dangerous\Options\Bindings
```
* __Copy__ the __ED-Warthog-Target-Script_Addon.exe__ from __Send data over TCP to Target Folder__ to :
```
\Users\<User>\Saved Games\Frontier Developments\Elite Dangerous\
```
* __Right Click__ on the exe, __Send to__ and select __Desktop create shortcut__
---
## WHEN YOU WANT TO PLAY :  
- __Launch the ED-Warthog-Target-Script_Addon.exe__   
	-First Option :  __With the shortcut__ previously created  
	-Second Option : Let the script Start the exe for you -> __Edit ED+HCS v3.0.tmc file, find the line below and replace <USER> with your Windows username and Uncomment the line__ (ex : Replace  __*< USER >*__ with __*martin*__ and __remove the //__ at the begining)
```
	//system("spawn -w \"C:\\Users\\< USER >\\Saved Games\\Frontier Developments\\Elite Dangerous\" \"C:\\Users\\< USER >\\Saved Games\\Frontier Developments\\Elite Dangerous\\ED-Warthog-Target-Script_Addon.exe\"");
```  
- Just __Drag&Drop ED+HCS v3.0.tmc in TARGET Script Editor and Run__. (Default script path can also be set in the options). __Always make sure the script is running prior to starting Elite Dangerous.__ 
- Most commands can be tested prior to starting the game in Target Script Editor using the Debug Message, Event Tester and Device Analyzer.
- __Launch Elite Dangerous, Options, Controls and chose the correct Binds Profile__ __ED+HCS V3.X.XX.XX.3.0.binds__  
- __Play :)__
### WARNING : If you want to change Bindings keys IN GAME, Make sure to use ENG(UK) Keyboard layout in Wndows. If you did not, your Bindings file will be unusable with the script. (ED change some keys inside the file to the current windows keyboard layout, even if you don't change them)
---
---
---
## BEFORE FLYING:

***First, I'm sorry for my English, as it is not my native language. You are Welcome to help me on my English Skill, and, obviously, with my Coding Skill (it is, also, not my native language) ;)***

__All the Settings are in the Settings File__ : **ED+HCS v3.0_Settings.tmh**

__The Command's are on the Joystick and Throttle Chart : [S]ShortPress, [L]LongPress, [EL]ExtraLongPress, [S3]Modifier Key on Joystick (Joystick Nosewhell Steering Button)__

**This Script require you have Check this Files before you start to Fly, so, please, take some minutes to check them.**

When you are in game, if, Throttle Switch are misaligned for Landing Gears and Cargo Scoop and Lights, you can Switch the states without sending game commands, Press [S3] (Joystick Nosewhell Steering Button)and switch LGears, CScoop or Lights. 

The Optimal PIP Mode, make Backup of Previous engaged PIP. By Default it will return to //2 SYS 2 ENG 2 WEP (0) if you don't make change before deploying Hardpoints or Fire after the game launch. 
I suggest, when you launch the game, to make one change to PIP before deploying hardpoints and another before fire, so the script can backup those value.

Almost ALL Optional Extra (OptimalPIPMode, Stop Fire Retract Hardpoints, Silent Runing OFF on Fire, SuperCruise on Throttle, ....) Can be switched ON/OFF on the Fly, Check Joystick and Throttle Chart's. 

## FEATURES:

- [ ] __Support MFD (2), Rudders and T.Flight rudders__ (NOT TESTED YET)
- [x] HMD / TrackIR Option for Some Function : Head Reset, Pause (TrackIr), Throttle Led Intensity.
- [ ] Easy Switch resest On The Fly for Landing Gear, Cargo Scoop, Light, Hardpoints, Rotational Correction : Press Joystick S3 Button + Switch
- [x] Easy Debug Msg OFF (Debugmode OFF (0) Or ON (1) In Settings File)
- [ ] __Supercruise On Throttle when throttle > 99%__ (Can be switched ON/OFF On The Fly, Disable by default). If you use Hardware Afterburner Detent you need to pass detent to supercruise.
- [x] Game Menu Up on Idle Throttle states. (Off by Default)
- [x] __Secure Retract Mode__ : Automatic Retract of Hardpoint Gear and cargo  when engaging Escape Fight Mode, Supercruise, FrameshiftDrive,...
- [x] __Dual stage trigger Combined Fire__ on Triger 1 to allow combined Primary & Secondary fire or for the trigger to be separated to Primary fire only. Can be switched ON/OFF On The Fly
- [x] __Support [Toggle] & [Hold] mode__ for Game Settings : __Reverse Throttle, Flight Assist & Silent Runing__ (Check Settings File : Default is Reverse Throttle [HOLD],  Flight Assist [HOLD], Silent Runing [TOGGLE]. If you want to change this : Modify in ED AND in the Settings file xxxGameMode)
- [x] Enhanced Functions Like Game Menu (Set Speed to 0, put silence runing off, PIP to tank then open game menu...when game menu is closed, restore previous PIP Mode...), System jump (target next system in route, Retract hardpoint if needed, Frameshift drive, then in Warp, set speed to 0 (safe next system entrance) ...More advanced functions will come later
- [x] __Rotate Joystick Axis to account for center Joystick mounting position__ (CenterJoystickMount & JoystickAngle)
- [ ] __Nvidia Shadowplay__ and __AMD Relive__ Video Capture and Streaming Support. (By Default, they are Disable)
- [ ] __Steam Screenshot__ Support. (For Normal Screenshot only : Off by Default)
- [ ] Possibility to swap Joystick and Throttle Maping in settings file (for now : SWAP SAME TYPE (Push, Toggle 2 positions, Toggle 3 positions or Hat) ONLY AND ON THE SAME DEVICE)


### LED:

- [x] __Support Toggle & Flashing Throttle LED's__
- [x] __Support Toggle & Flashing MFD LED's__
- [x] __Support Toggle & Flashing Throttle & MFD's Backlight__ 
- [x] __Easy Led Configuration__ : You can chose what you want to be assigned for each LED (5) (Check Settings file comments / LED SETTINGS to know more about How To ..)
- [x] __Throttle Backlight intensity On The Fly__ (S3 (Joystick Nosewhell Steering Button) + Friction Control Axis)
- [x] __Throttle Backlight Intensity on Idle Throttle states__. (Setup In Settings File. Default is Backlight Throttle LED is OFF (ThrottleLEDOnIDLE in settings file))
- [x] __Flash briefly the Throttle BackLight__ for Game Event : Over Heating, Is In Danger, Being Interdicted, Low Fuel (< 25%) and Shield Down : Option (WarningLED) can be Desactived in Settings file, ON by default
	
### PIP:

- [x] __Automatic PIP Mode__ (Backup & Restrore previous PIP Mode) when Deploy or Retract Hardpoints, Escape Fight, Fire, Game Menu,... Can be switched ON/OFF On The Fly
- [x] __PIP Management Joystick Hat Switch__ offering __12 different presets__ depending how long you hold down the Hat Button.

### PTT:

- [x] Default PTT Mode (Toggle or Hold). Can be switched  On The Fly (S3 (Joystick Nosewhell Steering Button) + Short Press Engine Operate Ign/Norm LEFT)
- [x] Default PTT (Internal or External). Can be switched On The Fly (S3 (Joystick Nosewhell Steering Button) + Long Press Engine Operate Ign/Norm LEFT)
	
### HEAT SINK:

- [ ] __Automatic Heat Sink On Silent Runing__. Can be switched  On The Fly (Extra Long Data Management Switch UP)
- [ ] __Automatic Heat Sink when Over Heating ( > 100% )__. You can Desactivate this option (HeatSinkOnOverHeat) in Settings file. ON by default
- [x] __Automatic Silent Runing Off & On when Fire__ (if silent runing is up before fire) and for other functions. Can be switched  On The Fly (Short Data Management Switch UP)

### JOYSTICK & THROTTLE CURVE:

- [x] __3 Joystick Curve Switchable On The Fly__ (Slew stick is include in this function) Switch In Game With Throttle FLAPS
- [x] __2 Throttle Curve Switchable On The Fly__ (normal & precison). Can be switched On & Off On The Fly (S3 (Joystick Nosewhell Steering Button) + Press RED Button on Throttle Arm)
- [x] __Enhanced Joystick Curves tailored for Flight Assist Off__ (Joystick Curve will return to previous state when FAON is release) Option  You can also select the tailored curve (FAOffCurve)  
- [ ] __Enhanced Joystick Curves tailored when Approching Planet__ (Joystick Curve will return to previous state when you will leave Planet) Option (HasLatLongAssist) can be Desactived in Settings file, ON by default. You can also select the tailored curve (HasLatLongCurve)
- [ ] __Support Joystick Axis trimming__ :  memorize the X and Y axis position and calculate the difference to the
center of the axis, and then  apply it to the X and Y axis (Throttle Coolie Switch [S3]UP to engage, [S3]DOWN to reset : Check Chart) OR Trim Old Way with Offset you can chose in Setting (Trim_INC)(Check Throttle Chart)

### AUTOPILOT MODE:

- [x] __3 Autopilot Mode__ : Easy Request and Cancel Docking procedure, Escape Fight and System Jump

### EXPLORER MODE (ENG L Throttle swith UP):

- [x] Desactivate some advanced functions you don't need for Exploration with one switch: Automatic PIP Mode (for fire & hardpoints), Automatic retract Hardpoint when you stop fire,... (if activated). If switch off this mode, it will return to all your previous choices.
- [ ] When You are in Explorer Mode Automatic System System Jump (long press speedbrake forward on your throttle arm) Work like this : target next system in route , set Full speed, then jump,  then, when you enter your next system, set throttle speed to 0, then automatically push the fire button for discovery scan (so check the settings file to put your discovery scan on fire 1 or fire 2 as it is in game), then automatically target the nearest star. __YOU CAN DESACTIVATE AUTO DISCOVERY SCAN AND AUTO TARGET NEAREST STAR IN SETTINGS FILE : AutoDiscoveryScan & TargetNearestStar options. 
 PLEASE, IF YOU USE THIS, ALIGN TO YOU NEXT SYSTEM BEFORE PUSHING THE JUMP__ You can, also change delay Speed to 0 when entering system : FSDOFFDelay Or Automatic Scan when entering system : FSDJumpScanDelay 
- [ ] You don't need to keep fire key pressed to scan system or use Scan (System, wake...),            **If Explorer mode is enable**, just press and release.( This function work on both Fire, chose wich you want to assign to scan in Settings File : ExploreModeFire , Triger use for Scan : 0 is Tg1, 1 is S2, 2 is Tg1 and S2 ). **If Explorer mode is disable**, you can also  use this function : Press [S3] & Fire 1 or/and Fire 2. (Warning : check TG1ScanDelay & S2ScanDelay in setting File. by default TG1ScanDelay is 6sec (system scan) and S2ScanDelay is 11sec (other scan))
