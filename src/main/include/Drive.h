#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Drive {
  public:
  Drive();

  private:
  WPI_TalonSRX leftMotor1{Constants::leftDriveMotorID1};
  WPI_TalonSRX leftMotor2{Constants::leftDriveMotorID2};
  WPI_TalonSRX rightMotor1{Constants::rightDriveMotorID1};
  WPI_TalonSRX rightMotor2{Constants::rightDriveMotorID2};
};
