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
    

    
    //Motors
    static const int leftMotor1 = 2;
    static const int leftMotor2 = 5;
    //const int leftMotor3 = 2;
    
    static const int rightMotor1 = 7;
    static const int rightMotor2 = 6;
    //const int rightMotor3 = 7;
    
    static const int intakeLeftMotor = 8;
    static const int intakeRightMotor = 10;
    
    // TODO this used to be 9, but I changed it to work on the test board
    //static const int armMotor = 9;
    static const int armMotor = 6;
    static const int climbMotor = 11;
    
    //Pneumatics
    static const int mainPCM = 12;
    static const int secPCM = 13;
    
    
    //Pins
    static const int leftEncoderA = 2 ;
    static const int leftEncoderB = 3 ;
    static const int rightEncoderA = 0 ;
    static const int rightEncoderB = 1;
    
    
    
    //****Pneumatic Channels
    //Power Take Off
    static const int ptoSolFwd=3;
    static const int ptoSolRev=4;

    //Gearbox
    static const int gearSolFwd=0;
    static const int gearSolRev=7;
    
    //Forklift
    static const int forkSolFwd=0;
    static const int forkSolRev=7;
    
    //Intake
    static const int inSolFwd=5;
    static const int inSolRev=2;
    
    //Claw and Brake
    static const int clawBrkFwd=6;
    static const int clawBrkRev=1;

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