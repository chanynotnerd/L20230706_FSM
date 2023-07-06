#include <iostream>
#include "State.h"
#include "Transition.h"

#include <map>
#include <vector>
using namespace std;

int main()
{
	map<int, State> States;
	States[1] = State(1,"��ȸ");
	States[2] = State(2, "�߰�");
	States[3] = State(3, "����");
	States[4] = State(4, "����");

	vector<Transition> Transitions;
	Transitions.push_back(Transition(1, "���߰�", 2));
	Transitions.push_back(Transition(2, "����ħ", 1));
	Transitions.push_back(Transition(2, "�����Ÿ�����", 3));
	Transitions.push_back(Transition(3, "�����Ÿ���Ż", 2));
	Transitions.push_back(Transition(1, "HP����", 4));

	int MonsterCurrentState = 1;
	string MonsterCondition = "���߰�";
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