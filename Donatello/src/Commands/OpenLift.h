#ifndef OpenLift_H
#define OpenLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class OpenLift: public CommandBase
{
public:
	OpenLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
