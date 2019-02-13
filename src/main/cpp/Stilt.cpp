#include "Stilt.h"

Stilt::Stilt() {}

void Stilt::DisplayEncoderInfo(){
    frc::SmartDashboard::PutNumber("Stilt Encoder: ", stiltMotor.GetSelectedSensorPosition(0));
}

void Stilt::updateFPID(double f, double p, double i, double d) {
	_f = f;
	_p = p;
	_i = i;
	_d = d;

	stiltMotor.Config_kF(0, _f, Constants::kTimeoutMs);
	stiltMotor.Config_kP(0, _p, Constants::kTimeoutMs);
	stiltMotor.Config_kI(0, _i, Constants::kTimeoutMs);
	stiltMotor.Config_kD(0, _d, Constants::kTimeoutMs);
}

std::tuple<double, double, double, double> Stilt::getFPID() {
	return std::make_tuple(_f, _p, _i, _d);
}
