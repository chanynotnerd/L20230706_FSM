#pragma once
#include <string>
using namespace std;

class Transition
{
public:
	Transition();
	virtual ~Transition();

	int CurrentState;
	string Condition;
	int NextState;
};

