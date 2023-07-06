#include <iostream>
#include "State.h"
#include "Transition.h"

#include <map>
using namespace std;

int main()
{
	map<int, State> TestState;
	TestState[1] = State();

	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
	}
}