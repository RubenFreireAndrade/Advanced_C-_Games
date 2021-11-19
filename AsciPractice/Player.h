#pragma once
#include"PlayerSelector.h"
#include"Inventory.h"

class Player
{
public:

	Player(Player* p, int hp, int dmg);
	~Player();

	bool IsAlive();
	bool IsPlayerInventory();

	void ReceiveDamage(int dmg);
	void ShowPlayerStats();
	void ShowPlayerInventory();
	void Pickup(std::string item);

	int health, attackPwr;
	int damage;
	int currentHP;

private:

	Player* player;
	Inventory* inventory;
	PlayerSelector playerSelector;
};

