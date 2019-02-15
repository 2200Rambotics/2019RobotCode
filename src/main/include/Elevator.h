#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Elevator {
  public:
  Elevator();
  void DisplayEncoderInfo();
  void putFPID();
  void updateFPID();

  private:
  double f = 0.0;
  double p = 1.0;
  double i = 0.0;
  double d = 20.0;

  WPI_TalonSRX elevatorLeftMotor1{Constants::elevatorLeftMotorID1};
  WPI_TalonSRX elevatorLeftMotor2{Constants::elevatorLeftMotorID2};
  WPI_TalonSRX elevatorRightMotor1{Constants::elevatorRightMotorID1};
  WPI_TalonSRX elevatorRightMotor2{Constants::elevatorRightMotorID2};
};