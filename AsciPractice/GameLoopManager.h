#pragma once
#include<string>
#include<iostream>

#include"Maps.h"
#include"Enemy.h"
#include"Inventory.h"
#include"Player.h"
#include"StateManager.h"
#include"FieldState.h"
#include"CharacterCreationState.h"

class GameLoopManager
{

public:

	GameLoopManager();
	~GameLoopManager();

	void GameLoop();
	std::string SetCmdColour(const char* systemColour);

	bool isGameRunning = true;

private:
	StateManager* stateManager;
};

