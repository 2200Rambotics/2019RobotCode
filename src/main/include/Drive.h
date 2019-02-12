#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>
#include <tuple>

#include "Constants.h"
#include "LineSensorArray.h"

class Drive {
  public:
  Drive();
  void drive(double forward, double turn);
  void DisplayEncoderInfo();
  void updateFPID(double f, double p, double i, double d);
  std::tuple<double, double, double, double> getFPID();
  void followLine(double forward, double turn);

  private:
  LineSensorArray lineSensorArray;

  double _f = 0.0;
  double _p = 1.0;
  double _i = 0.0;
  double _d = 20.0;

  WPI_TalonSRX leftMotor1{Constants::leftDriveMotorID1};
  WPI_TalonSRX leftMotor2{Constants::leftDriveMotorID2};
  WPI_TalonSRX rightMotor1{Constants::rightDriveMotorID1};
  WPI_TalonSRX rightMotor2{Constants::rightDriveMotorID2};
};
