#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
  m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
  frc::SmartDashboard::PutData("Auto Modes", &m_chooser);

  drive.putFPID();
  elevator.putFPID();
  intake.putFPID();
  stilt.putFPID();
}

void Robot::RobotPeriodic() {
  driveStick.updateButtons();
  opStick.updateButtons();

  drive.DisplayEncoderInfo();
  elevator.DisplayEncoderInfo();
  intake.DisplayEncoderInfo();
  stilt.DisplayEncoderInfo();
}

void Robot::AutonomousInit() {
  m_autoSelected = m_chooser.GetSelected();
  std::cout << "Auto selected: " << m_autoSelected << std::endl;

  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::AutonomousPeriodic() {
  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {
  if (driveStick.GetRawButtonPressed(Constants::xboxRightThumbstickClick)) {
    // Load FPID from dash and update all motor pid parameters
    drive.updateFPID();
    elevator.updateFPID();
    intake.updateFPID();
    stilt.updateFPID();
  }
}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
