#pragma once
#include"State.h"

class StateManager
{
public:

	StateManager(State* initialState);

	void Update();
	bool IsStatePlayerAlive();

private:

	State* currentState;
};

