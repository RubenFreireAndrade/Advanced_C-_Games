#pragma once
#include<string>
#include<iostream>

#include"Maps.h"
#include"Enemy.h"
#include"Locations.h"
#include"PlayerSelector.h"
#include"Inventory.h"
#include"Player.h"
#include"StateManager.h"
#include"FieldState.h"

class GameLoopManager
{

public:

	GameLoopManager();
	~GameLoopManager();

	void GameLoop();

	void CreateEnemy();

private:

	PlayerSelector playerSelector;
	//Locations locations;
	Enemy* enemy;
	Maps* maps;
	//Inventory inventory;
	Player* player;
	StateManager* stateManager;
};

