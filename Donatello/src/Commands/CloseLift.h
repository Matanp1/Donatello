#ifndef CloseLift_H
#define CloseLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class CloseLift: public CommandBase
{
public:
	CloseLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
