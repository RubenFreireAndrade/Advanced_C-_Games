#include <iostream>
#include <string>

#include"GameLoopManager.h"


int main()
{
	GameLoopManager gameLoopManager;
	
	bool isGameRunning = true;

	while (isGameRunning)
	{
		gameLoopManager.GameLoop();
	}

	system("pause");
	return 0;
}