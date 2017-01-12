# 2.2.1.6r 11/01/2017 (Pre Release)

- [x] Complete
- [ ] Work but Incomplete / Need More Test

### FEATURES:

- [ ] Support MFD (2), Rudders and T.Flight rudders (NOT TESTED YET)
- [x] HMD / TrackIR Option for Some Function : Head Reset, Pause (TrackIr), Led Intensity
- [ ] Easy Switch resest On The Fly for Landing Gear, Cargo Scoop, Light, Hardpoints, Rotational Correction (if misaligned with game states just switch (it's should work))
- [x] Easy Debug Msg OFF (Debugmode 0/1 In Settings File)
- [x] Supercruise On Throttle when boosting if throttle at 100%. Can be switched On or Off On The Fly
- [x] Game Menu Up on Idle Throttle states. (Setup In Settings File)
- [x] Secure Retract Mode : Automatic Retract of Hardpoint Gear and cargo  when engaging Escape Fight Mode, Supercruise, FrameshiftDrive,...
- [x] Dual stage trigger Combined Fire on Triger 1 to allow combined Primary & Secondary fire or for the trigger to be separated to Primary fire only. Can be switched On or Off On The Fly
- [ ] Support [Toggle] & [Hold] mode for Game Settings : Reverse Throttle, Flight Assist & Silent Runing (option in Settings File Default is Reverse Throttle [HOLD],  Flight Assist [HOLD], Silent Runing [TOGGLE]. If you want to change modify in ED AND in the setting file xxxGameMode)
- [ ] Enhanced Functions Like Game Menu (Set Speed to 0, put silence runing off, PIP to tank then open game menu...when game menu is closed, restore previous PIP Mode...), System jump (target next system in route, Retract hardpoint if needed, Frameshift drive, then in Warp, set speed to 0 (safe next system entrance) ...More advanced functions will come later


### LED:
	
- [x] Easy Led Configuration you can chose what you want to be assigned (Settings File)
- [x] Throttle LED intensity On The Fly (S3 + Friction Control Axis)
- [x] Throttle LED Intensity on Idle Throttle states. (Setup In Settings File. Default is Backlight Throttle LED is OFF (ThrottleLEDOnIDLE in setting file))
	
### PIP:

- [ ] Automatic PIP Mode When Deploy or Retract Hardpoints, Escape Fight, Fire, Game Menu, ... (Setup In Settings File ON or OFF)
- [x] PIP Management Hat Switch offering 8 different presets depending how long you hold down the button.

### PTT:

- [x] Default PTT Mode (Toggle or Hold). Can be switched  On The Fly (Long Press Engine Operate Ign/Norm RIGHT)
- [x] Default PTT (Internal or External). Can be switched On The Fly (S3 (Joystick Nosewhell Steering Button) + Long Press Engine Operate Ign/Norm RIGHT)
	
### HEAT SINK:

- [ ] Automatic Heat Sink On Silent Runing Can be switched  On The Fly (Long Data Management Switch UP)
- [x] Automatic Silent Runing OFF/ON when Fire (if silent runing is up before fire)  Can be switched  On The Fly (Short Data Management Switch UP)

### JOYSTICK & THROTTLE CURVE:

- [x] 3 Joystick Curve Switchable On The Fly (slew stick is include in this function) (Setup the Curve In Settings File. Switch In Game With Throttle FLAPS)
- [x] 2 Throttle Curve Switchable On The Fly (normal & precison). Can be switched On or Off On The Fly (S3 (Joystick Nosewhell Steering Button) + Press RED Button on Throttle Arm)
- [x] Enhanced Joystick Curves tailored for Flight Assist Off (Joystick Curve will return to previous state when FAON) (Setup In Settings File)

### AUTOPILOT MODE:

- [x] 3 Autopilot Mode : Easy Request and Cancel Docking procedure, Escape Fight and System Jump
