#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Stilt {
  public:
  Stilt();
  void DisplayEncoderInfo();
  void putFPID();
  void updateFPID();

  private:
  double f = 0.0;
  double p = 1.0;
  double i = 0.0;
  double d = 20.0;

  WPI_TalonSRX stiltMotor{Constants::stiltPositionMotorID};
};
