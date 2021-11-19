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

void Inventory::Additem(std::string newItem)
{
	inventory.insert(inventory.begin(), newItem);
}
