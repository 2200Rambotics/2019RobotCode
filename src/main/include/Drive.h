#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "Constants.h"
#include "LineSensorArray.h"

class Drive {
  public:
  Drive();
  void drive(double forward, double turn);
  void DisplayEncoderInfo();
  void putFPID();
  void updateFPID();
  void followLine(double forward, double turn);

  private:
  LineSensorArray lineSensorArray;

  double f = 0.0;
  double p = 1.0;
  double i = 0.0;
  double d = 20.0;

  WPI_TalonSRX leftMotor1{Constants::leftDriveMotorID1};
  WPI_TalonSRX leftMotor2{Constants::leftDriveMotorID2};
  WPI_TalonSRX rightMotor1{Constants::rightDriveMotorID1};
  WPI_TalonSRX rightMotor2{Constants::rightDriveMotorID2};
};
