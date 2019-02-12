#include "Drive.h"

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

void Drive::updateFPID(double f, double p, double i, double d) {
	_f = f;
	_p = p;
	_i = i;
	_d = d;

	leftMotor1.Config_kF(0, _f, Constants::kTimeoutMs);
	leftMotor1.Config_kP(0, _p, Constants::kTimeoutMs);
	leftMotor1.Config_kI(0, _i, Constants::kTimeoutMs);
	leftMotor1.Config_kD(0, _d, Constants::kTimeoutMs);
	leftMotor2.Config_kF(0, _f, Constants::kTimeoutMs);
	leftMotor2.Config_kP(0, _p, Constants::kTimeoutMs);
	leftMotor2.Config_kI(0, _i, Constants::kTimeoutMs);
	leftMotor2.Config_kD(0, _d, Constants::kTimeoutMs);
	rightMotor1.Config_kF(0, _f, Constants::kTimeoutMs);
	rightMotor1.Config_kP(0, _p, Constants::kTimeoutMs);
	rightMotor1.Config_kI(0, _i, Constants::kTimeoutMs);
	rightMotor1.Config_kD(0, _d, Constants::kTimeoutMs);
	rightMotor2.Config_kF(0, _f, Constants::kTimeoutMs);
	rightMotor2.Config_kP(0, _p, Constants::kTimeoutMs);
	rightMotor2.Config_kI(0, _i, Constants::kTimeoutMs);
	rightMotor2.Config_kD(0, _d, Constants::kTimeoutMs);
}

std::tuple<double, double, double, double> Drive::getFPID() {
	return std::make_tuple(_f, _p, _i, _d);
}
