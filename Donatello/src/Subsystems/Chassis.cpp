#include "Chassis.h"
#include "../RobotMap.h"

Chassis::Chassis() :
		Subsystem("Chassis")
{
	this->drive = new RobotDrive(new CANTalon(CHASSIS_LEFTA), new CANTalon(CHASSIS_LEFTB),
			new CANTalon(CHASSIS_RIGHTA), new CANTalon(CHASSIS_RIGHTB));
		this->drive->SetSafetyEnabled(false);
}

void Chassis::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
