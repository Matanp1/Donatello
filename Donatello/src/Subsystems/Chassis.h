#ifndef Chassis_H
#define Chassis_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:
	RobotDrive* drive;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Chassis();
	void InitDefaultCommand();
	void Drive(float magnitude, float rotation);
	void Drive(Joystick* stick);
};

#endif
