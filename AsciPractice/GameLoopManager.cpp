#include "GameLoopManager.h"


GameLoopManager::GameLoopManager()
{
	player = new Player(player, 50, 20);
	
	// Initialising first location state. 
	State* firstState = new CharacterCreationState(player);
	// Passing to StateManager.
	stateManager = new StateManager(firstState);

	// Assigning the Command Line text colour. Change to your liking.
	SetCmdColour("Color B");
}

GameLoopManager::~GameLoopManager()
{

}

void GameLoopManager::GameLoop()
{
	stateManager->Update();
	if (!player->IsAlive())
	{
		isGameRunning = false;
	}
}

std::string GameLoopManager::SetCmdColour(const char* systemColour)
{
	system(systemColour);
	return std::string(systemColour);
}
