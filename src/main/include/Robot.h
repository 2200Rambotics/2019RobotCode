#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "JoyStickDebounced.h"
#include "Elevator.h"
#include "Intake.h"
#include "Drive.h"
#include "Stilt.h"

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

private:
  JoyStickDebounced driveStick{0};
  JoyStickDebounced opStick{1};
  
  Drive drive;
  Elevator elevator;
  Intake intake;
  Stilt stilt;

  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
