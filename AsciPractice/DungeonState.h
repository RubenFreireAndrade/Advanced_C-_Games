#pragma once
#include"State.h"
#include"VillageState.h"

class DungeonState : public State
{
public:
	DungeonState(Player* p);
	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

private:
};

