#pragma once
#include"Inventory.h"
#include"Character.h"

class Player : public Character
{
public:
	Player(std::string name, int mHp, int cHp, int dmg);
	~Player();

	// Player Functions
	void MaxHeal();
	void ReceiveDamage(int dmg);
	void ShowPlayerStats();
	void ShowPlayerInventory();
	void Pickup(std::string item);
	void UseItem(std::string playerChoice);

	bool IsAlive();
	std::string CheckWeapon();
	void PickupStarterWeapon(std::string weapon);

private:
	int zeroHealth = 0;
	Player* player;
	Inventory* inventory;
	Character* character;
};

