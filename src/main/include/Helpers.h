#pragma once
#include <string>
#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

class Helpers {
    public:
    static void setMotorFPID(WPI_TalonSRX & motor, double f, double p, double i, double d);
    static void pushFPIDToDash(std::string motorName, double f, double p, double i, double d);
    static void pullFPIDFromDash(std::string motorName, double & f, double & p, double & i, double & d);
};