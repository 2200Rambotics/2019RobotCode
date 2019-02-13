#include "Intake.h"

Intake::Intake() {}

void Intake::DisplayEncoderInfo(){
    frc::SmartDashboard::PutNumber("Intake upper Encoder: ", intakeUpperMotor.GetSelectedSensorPosition(0));
    frc::SmartDashboard::PutNumber("Intake lower Encoder: ", intakeLowerMotor.GetSelectedSensorPosition(0));
    frc::SmartDashboard::PutNumber("Intake angle Encoder: ", intakeAngleMotor.GetSelectedSensorPosition(0));
}

void Intake::updateAngleFPID(double f, double p, double i, double d) {
	_AngleF = f;
	_AngleP = p;
	_AngleI = i;
	_AngleD = d;

	intakeAngleMotor.Config_kF(0, _AngleF, Constants::kTimeoutMs);
	intakeAngleMotor.Config_kP(0, _AngleP, Constants::kTimeoutMs);
	intakeAngleMotor.Config_kI(0, _AngleI, Constants::kTimeoutMs);
	intakeAngleMotor.Config_kD(0, _AngleD, Constants::kTimeoutMs);
}

std::tuple<double, double, double, double> Intake::getAngleFPID() {
	return std::make_tuple(_AngleF, _AngleP, _AngleI, _AngleD);
}

void Intake::updateRollerFPID(double f, double p, double i, double d) {
	_RollerF = f;
	_RollerP = p;
	_RollerI = i;
	_RollerD = d;

	intakeUpperMotor.Config_kF(0, _RollerF, Constants::kTimeoutMs);
	intakeUpperMotor.Config_kP(0, _RollerP, Constants::kTimeoutMs);
	intakeUpperMotor.Config_kI(0, _RollerI, Constants::kTimeoutMs);
	intakeUpperMotor.Config_kD(0, _RollerD, Constants::kTimeoutMs);
	intakeLowerMotor.Config_kF(0, _RollerF, Constants::kTimeoutMs);
	intakeLowerMotor.Config_kP(0, _RollerP, Constants::kTimeoutMs);
	intakeLowerMotor.Config_kI(0, _RollerI, Constants::kTimeoutMs);
	intakeLowerMotor.Config_kD(0, _RollerD, Constants::kTimeoutMs);
}

std::tuple<double, double, double, double> Intake::getRollerFPID() {
	return std::make_tuple(_RollerF, _RollerP, _RollerI, _RollerD);
}