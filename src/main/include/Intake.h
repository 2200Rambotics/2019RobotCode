#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Intake {
 public:
  Intake();
  void DisplayEncoderInfo();
  void putFPID();
  void updateFPID();

  private:
  double angleF = 0.0;
  double angleP = 1.0;
  double angleI = 0.0;
  double angleD = 20.0;

  double rollerF = 0.0;
  double rollerP = 1.0;
  double rollerI = 0.0;
  double rollerD = 20.0;

  WPI_TalonSRX intakeLowerMotor{Constants::intakeLowerRollerMotorID};
  WPI_TalonSRX intakeUpperMotor{Constants::intakeUpperRollerMotorID};
  WPI_TalonSRX intakeAngleMotor{Constants::intakeAngleMotorID};
};
