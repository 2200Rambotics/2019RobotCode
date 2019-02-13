#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>
#include <tuple>

#include "Constants.h"

class Stilt {
  public:
  Stilt();
  void DisplayEncoderInfo();
  void updateFPID(double f, double p, double i, double d);
  std::tuple<double, double, double, double> getFPID();

  private:
  double _f = 0.0;
  double _p = 1.0;
  double _i = 0.0;
  double _d = 20.0;

  WPI_TalonSRX stiltMotor{Constants::stiltPositionMotorID};
};
