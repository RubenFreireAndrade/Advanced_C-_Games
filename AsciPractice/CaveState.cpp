#include "CaveState.h"

CaveState::CaveState(Player* p)
{
	player = p;
	map = new Maps("mapCave");
}

void CaveState::Update()
{
	system("CLS");
	map->Draw();
	std::cout << "You are in a Cave." << std::endl;
	std::cout << "===========================================" << std::endl;
	Enemy* enemy = CreateEnemy();
	enemy->ShowEnemy();

	std::cout << "Fight?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Fight" << std::endl;
	std::cout << "2. Run" << std::endl;
	std::cin >> playerChoice;

	if (playerChoice == "1")
	{
		battleSystem->Battle(enemy, player);
		system("pause");
		// Create story to continue after fight.
	}
	else if (playerChoice == "2")
	{
		srand(time(0));
		int runChance = rand() % 6;
		if (runChance < 3)
		{
			std::cout << "You ran away!" << std::endl;
			system("pause");
			// Create story to continue after successfully running away.
		}
		else
		{
			std::cout << "Unable to run away!" << std::endl;
			system("pause");
			battleSystem->Battle(enemy, player);
			system("pause");
		}
	}
}

State* CaveState::ChangeState()
{
	if (playerChoice == "1")
	{
		return new DungeonState(player);
	}
	/*else if (playerChoice == "2")
	{
		BattleState();
	}*/
	else
	{
		return nullptr;
	}
}
