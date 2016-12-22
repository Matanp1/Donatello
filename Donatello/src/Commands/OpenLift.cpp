#include "OpenLift.h"

OpenLift::OpenLift()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(lift);
}

// Called just before this Command runs the first time
void OpenLift::Initialize()
{
	lift->SetPower(0);
}

// Called repeatedly when this Command is scheduled to run
void OpenLift::Execute()
{
	lift->SetPower(0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool OpenLift::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void OpenLift::End()
{
	lift->SetPower(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void OpenLift::Interrupted()
{
	End();
}
