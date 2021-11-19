#include<iostream>
#include "Locations.h"

 // Initialising .txt Maps.
Maps mapField = *new Maps("mapField");
Maps mapCave = *new Maps("mapCave");
Maps mapForest = *new Maps("mapForest");
Maps mapDungeon = *new Maps("mapDungeon");

// Working Progress.
//Inventory::ItemsExist itemsExist;

Locations::Locations()
{
	//player = new Player(50, 20);
}

Locations::~Locations()
{

}

void Locations::Field()
{
	system("CLS");
	mapField.Draw();
	std::cout << "You are on a Field." << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << playerSelector.GetPlayerName();
	std::cout << "Looks around and spots a Path. Do you take it?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	int playerChoice;
	std::cin >> playerChoice;

	if (playerChoice == 1)
	{
		Forest();
	}
	else if (playerChoice == 2)
	{
		system("CLS");
		std::cout << "Seems like nothing is here!" << std::endl;
		std::cout << "========================================" << std::endl;
		Field();
	}
}

void Locations::Forest()
{
	system("CLS");
	mapForest.Draw();
	std::cout << "You are in a Dark Forest." << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << playerSelector.GetPlayerName();

	// Battle Segment.			Create <List> to show item exists in world.
	std::cout << "Looks ahead and sees a weapon. Do you take it?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	int playerChoice;
	std::cin >> playerChoice;

	if (playerChoice == 1)
	{
		inventory.Additem("Sword");
		inventory.ShowItems();
	}
	else
	{
		Forest();
	}
	std::cout << "You spot an entrance. Do you take it?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	int playerChoiceCave;
	std::cin >> playerChoiceCave;

	if (playerChoiceCave == 1)
	{
		Cave();
	}
	else
	{
		Forest();
	}
}

void Locations::Cave()
{
	system("CLS");
	mapCave.Draw();
	std::cout << "You are in a Cave." << std::endl;
	std::cout << "===========================================" << std::endl;
	CreateEnemy();

	std::cout << "Fight?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Fight" << std::endl;
	std::cout << "2. Run" << std::endl;
	int fightChoice;
	std::cin >> fightChoice;

	if (fightChoice == 1)
	{
		battleSystem->Battle(enemy, player);
	}
	else
	{
		srand(time(0));
		int runChance = rand() % 6;
		if (runChance <= 3)
		{
			std::cout << "You ran away!" << std::endl;
		}
		else
		{
			battleSystem->Battle(enemy, player);
		}
	}
}

void Locations::Dungeon()
{
	system("CLS");
	mapDungeon.Draw();
	std::cout << "You are in a Dungeon." << std::endl;
	std::cout << "===========================================" << std::endl;
}

void Locations::CreateEnemy()
{
	srand(time(0));
	int generateEnemy = rand() % 4 + 1;

	switch (generateEnemy)
	{
	case 1:

		enemy = new Enemy("Pikachu", 20, 10);

		break;

	case 2:

		enemy = new Enemy("Wolf", 50, 10);

		break;

	case 3:

		enemy = new Enemy("Goblin", 30, 20);

		break;

	case 4:

		enemy = new Enemy("Slime", 10, 20);

		break;

	default:

		enemy = new Enemy("Broken Enemy", 1, 1);

		break;
	}
	enemy->ShowEnemy();
}

