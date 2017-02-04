# Elite Dangerous Warthog Target Script (HCS Keys Binding) 2.2.03.3b 2017/02/04

![ED LOGO](http://edassets.org/img/preview/elite-dangerous-logo_grey.png)

## 
***Special thanks go out to Aussiedroid, DarKcyde0, WraithMG11235, Synkc, Solarfly and Farinhir***
## 

- [x] Complete
- [ ] Implemented / Need More Test

### INSTALATION:

* The Warthog Script can be run from any location. All files from __Thrustmaster Warthog Script__ folder need to be in the same folder.
* Copy the Elite Dangerous Binds Profile __ED+HCS V2.2.03.3b.1.8.binds__ from __Default Keybinds - Elite Dangerous__ Folder to:
```
\Users\<User>\AppData\Local\Frontier Developments\Elite Dangerous\Options\Bindings
```

* Just Drag&Drop __ED+HCS v2.2.tmc__ to TARGET Script Editor and Run. (Default script path can also be set in the options). Always make sure the script is running prior to starting Elite Dangerous.
* Most commands can be tested prior to starting the game in Target Script Editor using the Debug Message, Event Tester and Device Analyzer.

### BEFORE FLYING:

***First, I'm sorry for my English, as it is not my native language. You are Welcome to help me on my English Skill, and, obviously, with my Coding Skill (it is, also, not my native language) ;)***

__All the Settings are in the Settings File.__

__The Command's are on the Joystick and Throttle Chart : [S]ShortPress, [L]LongPress, [EL]ExtraLongPress, [S3]Modifier Key on Joystick__

**This Script require you have Check this Files before you start to Fly, so, please, take some minutes to check them.**

The Script work with a lot of States value. Some of them are very important:

 * **Landing Gear Switch** (Throttle EAC Switch) state is **Switch Down : Retracted / Switch Up : Deployed**
 
 * **Cargo Scoop Switch** (Throttle RDR ALTM Switch) state is **Switch Down : Retracted / Switch Up : Deployed**

 * **Harpoints** (Joystick MASTER Mode Control Button Longpress) is a press Button, so no switch state. You need to know, **it start retracted when you launch the Script**
 
When you launch the Game, the script start with this states (according the switch position for LGears and CScoop). 
If, for example, hardpoints is already deployed you should "tell" to the script it is without sending Command Key ; Press [S3] and Joystick MASTER Mode Control Button Longpress, to "align" the Harpoints state betwen game and script.
That goes for LGears and CScoop to. You can Switch the states without sending game commands, like previously, Press [S3] and switch LGears or/and CScoop if "mis aligned" 

The Optimal PIP Mode, make Backup of Previous engaged PIP. By Default it will return to //2 SYS 2 ENG 2 WEP (0) if you don't make change before deploying Hardpoints or Fire after the game launch. 
I suggest, when you launch the game, to make one change to PIP before deploying hardpoints and another before fire, so the script can backup those value.

Because of all this tracking states in the script, __HCS User should use L.Gears, C.Scoop, Hardpoints, and PIP on HOTAS__. Other commands should be OK to use via HCS

Almost ALL Optional Extra (OptimalPIPMode, Stop Fire Retract Hardpoints, Silent Runing OFF on Fire, SuperCruise on Throttle, ....) Can be switched ON/OFF on the Fly, Check Joystick and Throttle Chart's. 

### FEATURES:

- [ ] Support MFD (2), Rudders and T.Flight rudders (NOT TESTED YET)
- [x] HMD / TrackIR Option for Some Function : Head Reset, Pause (TrackIr), Led Intensity.
- [ ] Easy Switch resest On The Fly for Landing Gear, Cargo Scoop, Light, Hardpoints, Rotational Correction (if misaligned with game states just switch (it's should work) Or Press S3 + Switch)
- [x] Easy Debug Msg OFF (Debugmode OFF (0) Or ON (1) In Settings File)
- [x] Supercruise On Throttle when boosting if throttle at 100%. (Can be switched ON/OFF On The Fly). If you use Hardware Afterburner Detent, it's even better: you don't need to push boosting key, you just need to pass detent to supercruise.
- [x] Game Menu Up on Idle Throttle states. (Off by Default)
- [x] Secure Retract Mode : Automatic Retract of Hardpoint Gear and cargo  when engaging Escape Fight Mode, Supercruise, FrameshiftDrive,...
- [x] Dual stage trigger Combined Fire on Triger 1 to allow combined Primary & Secondary fire or for the trigger to be separated to Primary fire only. Can be switched ON/OFF On The Fly
- [x] Support [Toggle] & [Hold] mode for Game Settings : Reverse Throttle, Flight Assist & Silent Runing (Check Settings File : Default is Reverse Throttle [HOLD],  Flight Assist [HOLD], Silent Runing [TOGGLE]. If you want to change this : Modify in ED AND in the Settings file xxxGameMode)
- [x] Enhanced Functions Like Game Menu (Set Speed to 0, put silence runing off, PIP to tank then open game menu...when game menu is closed, restore previous PIP Mode...), System jump (target next system in route, Retract hardpoint if needed, Frameshift drive, then in Warp, set speed to 0 (safe next system entrance) ...More advanced functions will come later
- [ ] Rotate Joystick Axis to account for center Joystick mounting position (CenterJoystickMount & JoystickAngle)
- [ ] Nvidia Shadowplay and AMD Relive Video Capture and Streaming Support. (By Default, they are Disable)
- [ ] Steam Screenshot Support. (For Normal Screenshot only : Off by Default)


### LED:

- [x] Support Toggle & Flashing Throttle LED's (For now, Flashing LED is only configured for Capture video and streaming video LED (Shadowplay or Relive) if you activate this and change default LED to respective one in Settings file)
- [ ] Support Toggle & Flashing MFD LED's
- [ ] Support Toggle & Flashing Throttle & MFD's Backlight (For now, Flashing Throttle Backlight is only for Escape Fight : Autopilot Fonction (Panic Mode, for the Fun :) )
- [x] Easy Led Configuration : You can chose what you want to be assigned (Just Put LED1,LED2 ... on what you want the LED to be : Check Settings file comments / LED SETTINGS to know more about How To ..)
- [x] Throttle Backlight intensity On The Fly (S3 + Friction Control Axis)
- [x] Throttle Backlight Intensity on Idle Throttle states. (Setup In Settings File. Default is Backlight Throttle LED is OFF (ThrottleLEDOnIDLE in settings file))
	
### PIP:

- [x] Automatic PIP Mode (Backup & Restrore previous PIP Mode) When Deploy or Retract Hardpoints, Escape Fight, Fire, Game Menu,... Can be switched ON/OFF On The Fly
- [x] PIP Management Hat Switch offering 12 different presets depending how long you hold down the button.

### PTT:

- [x] Default PTT Mode (Toggle or Hold). Can be switched  On The Fly (S3 (Joystick Nosewhell Steering Button) + Short Press Engine Operate Ign/Norm LEFT)
- [x] Default PTT (Internal or External). Can be switched On The Fly (S3 (Joystick Nosewhell Steering Button) + Long Press Engine Operate Ign/Norm LEFT)
	
### HEAT SINK:

- [ ] Automatic Heat Sink On Silent Runing Can be switched  On The Fly (Extra Long Data Management Switch UP)
- [x] Automatic Silent Runing Off & On when Fire (if silent runing is up before fire) and for other functions. Can be switched  On The Fly (Short Data Management Switch UP)

### JOYSTICK & THROTTLE CURVE:

- [x] 3 Joystick Curve Switchable On The Fly (Slew stick is include in this function) Switch In Game With Throttle FLAPS
- [x] 2 Throttle Curve Switchable On The Fly (normal & precison). Can be switched On & Off On The Fly (S3 (Joystick Nosewhell Steering Button) + Press RED Button on Throttle Arm)
- [x] Enhanced Joystick Curves tailored for Flight Assist Off (Joystick Curve will return to previous state when FAON is release)
- [ ] Support Joystick Axis trimming :  memorize the X and Y axis position and calculate the difference to the
center of the axis, and then  apply it to the X and Y axis (Throttle Coolie Switch [S3]UP to engage, [S3]DOWN to reset : Check Chart) OR Trim Old Way with Offset you can chose in Setting (Trim_INC)(Check Throttle Chart)

### AUTOPILOT MODE:

- [x] 3 Autopilot Mode : Easy Request and Cancel Docking procedure, Escape Fight and System Jump

### EXPLORER MODE:

***Thinking to make a mode wich restore all the Original ED Gameplay with one Switch (without all the advanced option (like optimalPIP, PIP Preset's, SecureRetract,...) instead of explorer mode. Let me know what you think.***

- [x] Desactivate some advanced functions you don't need for Exploration with one switch: Automatic PIP Mode (for fire & hardpoints), Automatic retract Hardpoint when you stop fire,... (if activated). If switch off this mode, it will return to all your previous choices.
- [ ] You don't need to keep fire key pressed to scan system or use Scan (System, wake...), just press and release. ( This function work on both Fire, chose wich you want to assign to scan in Settings File : ExploreModeFire , Triger use for Scan : 0 is Tg1, 1 is S2, 2 is Tg1 and S2 )