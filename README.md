# Elite Dangerous Warthog Target Script (HCS Keys Binding) 2.2.03.3b 2017/01/27

![ED LOGO](http://edassets.org/img/preview/elite-dangerous-logo_grey.png)

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

The Script work with a lot of States value. Some of them are very important:

 * Landing Gear Switch (Throttle EAC Switch) state is Switch Down : Retracted / Switch Up : Deployed
 
 * Cargo Scoop Switch (Throttle RDR ALTM Switch) state is Switch Down : Retracted / Switch Up : Deployed

 * Harpoints (Joystick MASTER Mode Control Button Longpress) is a press Button, so no switch state. You need to know, it start retracted in Script
 

When you launch the Game, the script start with this states (according the switch position for LGears and CScoop). 
If, for example, hardpoints is already deployed you should "tell" to the script it is without sending Command Key ; Press [S3] and Joystick MASTER Mode Control Button Longpress, to "align" the Harpoints state betwen game and script.
That goes for LGears and CScoop to. You can Switch the states withous sending game commands, like previously, Press [S3] and switch LGears or/and CScoop if "mis aligned" 

The Optimal PIP Mode, make Backup of Previous engaged PIP. By Default it will return to //2 SYS 2 ENG 2 WEP (0) if you don't make change before deploying Hardpoints or Fire after the game launch. 
I suggest, when you launch the game, to make one change to PIP before deploying hardpoints and another before fire, so the script can backup those value.


### FEATURES:

- [ ] Support MFD (2), Rudders and T.Flight rudders (NOT TESTED YET)
- [x] HMD / TrackIR Option for Some Function : Head Reset, Pause (TrackIr), Led Intensity
- [ ] Easy Switch resest On The Fly for Landing Gear, Cargo Scoop, Light, Hardpoints, Rotational Correction (if misaligned with game states just switch (it's should work) Or Press S3 + Switch)
- [x] Easy Debug Msg OFF (Debugmode OFF (0) Or ON (1) In Settings File)
- [x] Supercruise On Throttle when boosting if throttle at 100%. Can be switched On or Off On The Fly
- [x] Game Menu Up on Idle Throttle states. (Setup In Settings File)
- [x] Secure Retract Mode : Automatic Retract of Hardpoint Gear and cargo  when engaging Escape Fight Mode, Supercruise, FrameshiftDrive,...
- [x] Dual stage trigger Combined Fire on Triger 1 to allow combined Primary & Secondary fire or for the trigger to be separated to Primary fire only. Can be switched On or Off On The Fly
- [x] Support [Toggle] & [Hold] mode for Game Settings : Reverse Throttle, Flight Assist & Silent Runing (option in Settings File Default is Reverse Throttle [HOLD],  Flight Assist [HOLD], Silent Runing [TOGGLE]. If you want to change modify in ED AND in the setting file xxxGameMode)
- [x] Enhanced Functions Like Game Menu (Set Speed to 0, put silence runing off, PIP to tank then open game menu...when game menu is closed, restore previous PIP Mode...), System jump (target next system in route, Retract hardpoint if needed, Frameshift drive, then in Warp, set speed to 0 (safe next system entrance) ...More advanced functions will come later
- [ ] Rotate Joystick Axis 15deg CCW to account for center Joystick mounting position (CenterJoystickMount option in settings file)


### LED:
	
- [x] Easy Led Configuration : You can chose what you want to be assigned (Settings File)
- [x] Throttle LED intensity On The Fly (S3 + Friction Control Axis)
- [x] Throttle LED Intensity on Idle Throttle states. (Setup In Settings File. Default is Backlight Throttle LED is OFF (ThrottleLEDOnIDLE in setting file))
	
### PIP:

- [x] Automatic PIP Mode (Backup & Restrore previous PIP Mode) When Deploy or Retract Hardpoints, Escape Fight, Fire, Game Menu, ... (Setup In Settings File ON or OFF). Can be switched On or Off On The Fly
- [x] PIP Management Hat Switch offering 12 different presets depending how long you hold down the button.

### PTT:

- [x] Default PTT Mode (Toggle or Hold). Can be switched  On The Fly (S3 (Joystick Nosewhell Steering Button) + Short Press Engine Operate Ign/Norm LEFT)
- [x] Default PTT (Internal or External). Can be switched On The Fly (S3 (Joystick Nosewhell Steering Button) + Long Press Engine Operate Ign/Norm LEFT)
	
### HEAT SINK:

- [ ] Automatic Heat Sink On Silent Runing Can be switched  On The Fly (Extra Long Data Management Switch UP)
- [x] Automatic Silent Runing Off & On when Fire (if silent runing is up before fire) and for other functions. Can be switched  On The Fly (Short Data Management Switch UP)

### JOYSTICK & THROTTLE CURVE:

- [x] 3 Joystick Curve Switchable On The Fly (slew stick is include in this function) (Setup the Curve In Settings File. Switch In Game With Throttle FLAPS)
- [x] 2 Throttle Curve Switchable On The Fly (normal & precison). Can be switched On & Off On The Fly (S3 (Joystick Nosewhell Steering Button) + Press RED Button on Throttle Arm)
- [x] Enhanced Joystick Curves tailored for Flight Assist Off (Joystick Curve will return to previous state when FAON) (Setup In Settings File)

### AUTOPILOT MODE:

- [x] 3 Autopilot Mode : Easy Request and Cancel Docking procedure, Escape Fight and System Jump

### EXPLORER MODE:

- [x] Desactivate some advanced functions you don't need for Exploration with one switch: Automatic PIP Mode (for fire & hardpoints), Automatic retract Hardpoint when you stop fire,... (if activated). If switch off this mode, it will return to all your previous choices.
- [ ] You don't need to keep fire key pressed to scan system or use Scan (System, wake...), just press and release. ( This function work on both Fire, chose wich you want to assign to scan in Settings File : ExploreModeFire , Triger use for Scan : 0 is Tg1, 1 is S2, 2 is Tg1 and S2 )