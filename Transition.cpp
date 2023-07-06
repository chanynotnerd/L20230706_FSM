#include "Transition.h"

Transition::Transition()
{
	CurrentState = 0;;
	Condition = "";
	NextState = 0;
}

Transition::Transition(int InCurrentState, string InCondition, int Out)
{
	CurrentState = InCurrentState;
	Condition = InCondition;
	NextState = Out;
}


Transition::~Transition()
{
}
