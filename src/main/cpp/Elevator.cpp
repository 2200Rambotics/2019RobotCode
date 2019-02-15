#include "Elevator.h"
#include "Helpers.h"

Elevator::Elevator() {}

void Elevator::DisplayEncoderInfo(){
    frc::SmartDashboard::PutNumber("Elevator Encoder: ", 
        elevatorLeftMotor1.GetSelectedSensorPosition(0));
}

void Elevator::putFPID() {
	Helpers::pushFPIDToDash("Elevator", f, p, i, d);
}

void Elevator::updateFPID() {
	Helpers::pullFPIDFromDash("Elevator", f, p, i, d);

	Helpers::setMotorFPID(elevatorLeftMotor1, f, p, i, d);
	Helpers::setMotorFPID(elevatorLeftMotor2, f, p, i, d);
	Helpers::setMotorFPID(elevatorRightMotor1, f, p, i, d);
	Helpers::setMotorFPID(elevatorRightMotor2, f, p, i, d);
}