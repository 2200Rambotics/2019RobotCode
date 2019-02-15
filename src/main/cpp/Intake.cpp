#include "Intake.h"
#include "Helpers.h"
#include <frc/smartdashboard/SmartDashboard.h>

Intake::Intake() {}

void Intake::DisplayEncoderInfo(){
    frc::SmartDashboard::PutNumber("Intake upper Encoder: ", intakeUpperMotor.GetSelectedSensorPosition(0));
    frc::SmartDashboard::PutNumber("Intake lower Encoder: ", intakeLowerMotor.GetSelectedSensorPosition(0));
    frc::SmartDashboard::PutNumber("Intake angle Encoder: ", intakeAngleMotor.GetSelectedSensorPosition(0));
}

void Intake::putFPID() {
	Helpers::pushFPIDToDash("Intake roller", rollerF, rollerP, rollerI, rollerD);
	Helpers::pushFPIDToDash("Intake angle", angleF, angleP, angleI, angleD);
}

void Intake::updateFPID() {
	Helpers::pullFPIDFromDash("Intake roller", rollerF, rollerP, rollerI, rollerD);
	Helpers::pullFPIDFromDash("Intake angle", angleF, angleP, angleI, angleD);

	Helpers::setMotorFPID(intakeAngleMotor, angleF, angleP, angleI, angleD);
	Helpers::setMotorFPID(intakeUpperMotor, rollerF, rollerP, rollerI, rollerD);
	Helpers::setMotorFPID(intakeLowerMotor, rollerF, rollerP, rollerI, rollerD);
}