#include "InventoryState.h"

InventoryState::InventoryState(Player* p)
{
	player = p;
}

void InventoryState::Update()
{
	ClearScreen();
	std::cout << "Player inventory contains:" << std::endl;
	std::cout << "===========================================" << std::endl;
	player->ShowPlayerInventory();
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Exit Inventory" << std::endl;
	std::cout << "2. Use an item" << std::endl;
	std::cin >> playerChoice;

	if (playerChoice == choiceTwo)
	{
		ClearScreen();
		player->ShowPlayerInventory();
		std::cout << "Type the item you would like to use." << std::endl;
		std::cin >> playerChoice;

		player->UseItem(playerChoice);
	}
}

State* InventoryState::ChangeState()
{
	if (playerChoice == choiceOne)
	{
		return previousState;
	}
	else
	{
		return nullptr;
	}
}
