#pragma once
#include"Inventory.h"

class Player
{
public:

	Player(Player* p, int hp, int dmg);
	~Player();

	bool IsAlive();

	void ReceiveDamage(int dmg);
	void ShowPlayerStats();
	void ShowPlayerInventory();
	void Pickup(std::string item);
	void MaxHeal();
	void UseItem(std::string playerChoice);

	int health, attackPwr;
	int damage;
	int currentHP;
	int maxHP;

private:

	Player* player;
	Inventory* inventory;
};

