#include <frc/smartdashboard/SmartDashboard.h>

#include "Constants.h"
#include "Helpers.h"

void Helpers::setMotorFPID(WPI_TalonSRX & motor, double f, double p, double i, double d) { 
    motor.Config_kF(0, f, Constants::kTimeoutMs);
    motor.Config_kP(0, p, Constants::kTimeoutMs);
    motor.Config_kI(0, i, Constants::kTimeoutMs);
    motor.Config_kD(0, d, Constants::kTimeoutMs);
}

void Helpers::pushFPIDToDash(std::string motorName, double f, double p, double i, double d) {
	frc::SmartDashboard::PutNumber(motorName + " F:", f);
	frc::SmartDashboard::PutNumber(motorName + " P:", p);
	frc::SmartDashboard::PutNumber(motorName + " I:", i);
	frc::SmartDashboard::PutNumber(motorName + " D:", d);
}

void Helpers::pullFPIDFromDash(std::string motorName, double & f, double & p, double & i, double & d) {
	f = frc::SmartDashboard::GetNumber(motorName + " F:", 0.00000069);
	p = frc::SmartDashboard::GetNumber(motorName + " P:", 0.00000069);
	i = frc::SmartDashboard::GetNumber(motorName + " I:", 0.00000069);
	d = frc::SmartDashboard::GetNumber(motorName + " D:", 0.00000069);
}
