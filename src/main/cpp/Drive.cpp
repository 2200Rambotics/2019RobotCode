#include "Drive.h"
#include "Helpers.h"

Drive::Drive() {
    leftMotor2.Follow(leftMotor1);
    rightMotor2.Follow(rightMotor1);

	leftMotor1.SetNeutralMode(NeutralMode::Brake);
	leftMotor2.SetNeutralMode(NeutralMode::Brake);

	rightMotor1.SetNeutralMode(NeutralMode::Brake);
	rightMotor2.SetNeutralMode(NeutralMode::Brake);

	leftMotor1.ConfigSelectedFeedbackSensor(motorcontrol::FeedbackDevice::QuadEncoder, 0, Constants::kTimeoutMs);

	rightMotor1.ConfigSelectedFeedbackSensor(motorcontrol::FeedbackDevice::QuadEncoder, 0, Constants::kTimeoutMs);
}

void Drive::DisplayEncoderInfo(){
    frc::SmartDashboard::PutNumber("Drive left Encoder: ", leftMotor1.GetSelectedSensorPosition(0));
    frc::SmartDashboard::PutNumber("Drive right Encoder: ", rightMotor1.GetSelectedSensorPosition(0));
}

void Drive::putFPID() {
	Helpers::pushFPIDToDash("Drive", f, p, i, d);
}

void Drive::updateFPID() {
	Helpers::pullFPIDFromDash("Drive", f, p, i, d);

	Helpers::setMotorFPID(leftMotor1, f, p, i, d);
	Helpers::setMotorFPID(leftMotor2, f, p, i, d);
	Helpers::setMotorFPID(rightMotor1, f, p, i, d);
	Helpers::setMotorFPID(rightMotor2, f, p, i, d);

}

void Drive::followLine(double forward, double turn) {

}