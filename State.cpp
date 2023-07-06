#include "State.h"

State::State()
{
	ID = 0;
	StateName = "";
}

State::State(int InID, string InStateName)
{
	ID = InID;
	StateName = InStateName;
}

State::~State()
{
}
