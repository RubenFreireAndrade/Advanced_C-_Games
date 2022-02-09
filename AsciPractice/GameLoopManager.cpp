#include "GameLoopManager.h"


GameLoopManager::GameLoopManager()
{	
	// Initialising first location state. 
	State* firstState = new CharacterCreationState();
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
	if (!stateManager->IsStatePlayerAlive())
	{
		isGameRunning = false;
	}
}

std::string GameLoopManager::SetCmdColour(const char* systemColour)
{
	system(systemColour);
	return std::string(systemColour);
}
