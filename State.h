#pragma once
#include <string>
using namespace std;

class State
{
public:
	State();
	virtual ~State();

	int ID;
	string StateName;
};

/*
public:
	State() : ID(0), StateName("")	// 생성자 초기화
	{}
*/