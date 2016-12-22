#include "OI.h"
#include "Commands/CloseLift.h"
#include "Commands/OpenLift.h"
#include "RobotMap.h"
OI::OI()
{
	this->stick = new Joystick(JOYSTICK_PORT);
	for(int i = 0; i < 10; i++)
	{
		this->buttons[i] = new JoystickButton(this->stick, i+1);
	}
	this->buttons[4]->WhileHeld(new CloseLift);//LB
	this->buttons[5]->WhileHeld(new OpenLift);//LB
}
Joystick* OI::GetStick()
{
	return this->stick;
}
