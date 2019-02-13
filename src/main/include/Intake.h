#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>
#include <tuple>

#include "Constants.h"

class Intake {
 public:
  Intake();
  void DisplayEncoderInfo();
  void updateAngleFPID(double f, double p, double i, double d);
  std::tuple<double, double, double, double> getAngleFPID();
  void updateRollerFPID(double f, double p, double i, double d);
  std::tuple<double, double, double, double> getRollerFPID();

  private:
  double _AngleF = 0.0;
  double _AngleP = 1.0;
  double _AngleI = 0.0;
  double _AngleD = 20.0;

  double _RollerF = 0.0;
  double _RollerP = 1.0;
  double _RollerI = 0.0;
  double _RollerD = 20.0;

  WPI_TalonSRX intakeLowerMotor{Constants::intakeLowerRollerMotorID};
  WPI_TalonSRX intakeUpperMotor{Constants::intakeUpperRollerMotorID};
  WPI_TalonSRX intakeAngleMotor{Constants::intakeAngleMotorID};
};
