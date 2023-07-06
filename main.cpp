#include <iostream>
#include "State.h"
#include "Transition.h"

#include <map>
#include <vector>
using namespace std;

int main()
{
	map<int, State> States;
	States[1] = State(1,"배회");
	States[2] = State(2, "추격");
	States[3] = State(3, "공격");
	States[4] = State(4, "죽음");

	vector<Transition> Transitions;
	Transitions.push_back(Transition(1, "적발견", 2));
	Transitions.push_back(Transition(2, "적놓침", 1));
	Transitions.push_back(Transition(2, "사정거리접근", 3));
	Transitions.push_back(Transition(3, "사정거리이탈", 2));
	Transitions.push_back(Transition(1, "HP없음", 4));

	int MonsterCurrentState = 1;
	string MonsterCondition = "적발견";
	int MonsterNextState = 0;

	for (int i = 0; i < Transitions.size(); ++i)
	{
		if (Transitions[i].CurrentState == MonsterCurrentState &&
			Transitions[i].Condition == MonsterCondition)
		{
			MonsterNextState = Transitions[i].NextState;
		}
	}

	cout << States[MonsterNextState].StateName << endl;

	 return 0;
}