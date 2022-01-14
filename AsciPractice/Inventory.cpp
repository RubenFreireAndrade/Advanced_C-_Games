#include "Inventory.h"

Inventory::Inventory()
{
	
}

Inventory::~Inventory()
{
	
}

void Inventory::ShowItems()
{
	for (auto it = inventory.begin(); it != inventory.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

void Inventory::AddItem(std::string newItem)
{
	auto name = std::find(inventory.begin(), inventory.end(), newItem);
	if (name != inventory.end())
	{
		std::cout << "You already have that item in Inventory" << std::endl;
	}
	else
	{
		inventory.push_back(newItem);
	}
}

void Inventory::CheckItem(std::string playerChoice)
{
	itemChosen = playerChoice;
	auto item = std::find(inventory.begin(), inventory.end(), itemChosen);
	if (item != inventory.end())
	{
		std::cout << "Player consumed: " << itemChosen << std::endl;
		system("pause");
	}
	else
	{
		std::cout << "This " << itemChosen << " does not exist. Choose another item" << std::endl;
		system("pause");
	}
}

std::string Inventory::GetChosenItem()
{
	return std::string(itemChosen);
}
