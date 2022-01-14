#pragma once
#include"State.h"

class VillageState : public State
{

public:

	VillageState(Player* player);
	~VillageState();

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

private:




};

