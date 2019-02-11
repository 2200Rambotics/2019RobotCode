#pragma once

class Constants {
    public:
    //BUTTONS
    static const int xboxA = 1;
    static const int xboxB = 2;
    static const int xboxX = 3;
    static const int xboxY = 4;
    
    static const int xboxStart = 8;
    static const int xboxBack = 7;
    
    static const int xboxLeftThumbstickClick = 9;
    static const int xboxRightThumbstickClick = 10;
    
    static const int xboxLeftShoulder = 5;
    static const int xboxRightShoulder = 6;
    
    //AXES
    static const int xboxLeftTrigger = 2;
    static const int xboxRightTrigger = 3;

    static const int xboxLeftThumbstickX = 0;
    static const int xboxLeftThumbstickY = 1;
    static const int xboxRightThumbstickX = 4;
    static const int xboxRightThumbstickY = 5;
    
    // CAN IDs
    static const int leftDriveMotorID1 = 1;
    static const int leftDriveMotorID2 = 2;
    
    static const int rightDriveMotorID1 = 3;
    static const int rightDriveMotorID2 = 4;
    
    static const int elevatorLeftMotorID1 = 5;
    static const int elevatorLeftMotorID2 = 6;
    static const int elevatorRightMotorID1 = 7;
    static const int elevatorRightMotorID2 = 8;

    static const int intakeAngleMotorID = 9;

    static const int intakeUpperRollerMotorID = 10;
    static const int intakeLowerRollerMotorID = 11;

    static const int stiltPositionMotorID = 12;

    static const int mainPCM = 20;
    
    //Pins
    
    //****Pneumatic Channels
    // Finger tilt
    static const int fingerTiltFwd=0;
    static const int fingerTiltRev=7;

    // Finger extend
    static const int fingerExtendFwd=0;
    static const int fingerExtendRev=7;

    // Disc stop
    static const int discStopFwd=0;
    static const int discStopRev=7;

    //Gearbox
    static const int gearSolFwd=0;
    static const int gearSolRev=7;

    // TODO move this to a per-class variable
	/**
	 * How many sensor units per rotation.
	 * Using CTRE Magnetic Encoder.
	 * @link https://github.com/CrossTheRoadElec/Phoenix-Documentation#what-are-the-units-of-my-sensor
	 */
	static const int kSensorUnitsPerRotation = 1024;

	/**
	 * Which PID slot to pull gains from.  Starting 2018, you can choose 
	 * from 0,1,2 or 3.  Only the first two (0,1) are visible in web-based configuration.
	 */
	static const int kSlotIdx = 0;

	/** 
	 * Talon SRX/ Victor SPX will supported multiple (cascaded) PID loops.  
	 * For now we just want the primary one.
	 */
	static const int kPIDLoopIdx = 0;

	/**
	 * set to zero to skip waiting for confirmation, set to nonzero to wait
	 * and report to DS if action fails.
	 */
	static const int kTimeoutMs = 30;

	/**
	 * Base trajectory period to add to each individual 
	 * trajectory point's unique duration.  This can be set
	 * to any value within [0,255]ms.
	 */
	static const int kBaseTrajPeriodMs = 0;

	/**
	 * Motor deadband, set to 1%.
	 */
	static const int kNeutralDeadbandPercent = 1;
};