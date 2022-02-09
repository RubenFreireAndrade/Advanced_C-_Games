#pragma once
#include"Inventory.h"
#include"Character.h"

class Player : public Character
{
public:

	Player(std::string name, int mHp, int cHp, int dmg);
	~Player();

	bool IsAlive();

	// Player Functions
	void ReceiveDamage(int dmg);
	void ShowPlayerStats();
	void ShowPlayerInventory();
	void Pickup(std::string item);
	void MaxHeal();
	void UseItem(std::string playerChoice);

	std::string CheckWeapon();
	void PickupStarterWeapon(std::string weapon);

private:

	Player* player;
	Inventory* inventory;
	Character* character;
};

