#include "Stilt.h"
#include "Helpers.h"

Stilt::Stilt() {}

void Stilt::DisplayEncoderInfo(){
    frc::SmartDashboard::PutNumber("Stilt Encoder: ", stiltMotor.GetSelectedSensorPosition(0));
}

void Stilt::putFPID() {
	Helpers::pushFPIDToDash("Stilt", f, p, i, d);
}

void Stilt::updateFPID() {
	Helpers::pullFPIDFromDash("Stilt", f, p, i, d);

	Helpers::setMotorFPID(stiltMotor, f, p, i, d);
}