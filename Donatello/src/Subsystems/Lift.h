#ifndef Lift_H
#define Lift_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lift: public Subsystem
{
private:
	CANTalon* motor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Lift();
	void InitDefaultCommand();
	void SetPower(float power);
};

#endif
