#include "Lift.h"
#include "../RobotMap.h"

Lift::Lift() :
		Subsystem("Lift")
{
	this->motor = new CANTalon(LIFT_MOTOR);
}

void Lift::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Lift::SetPower(float power)
{
	this->motor->Set(power);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
