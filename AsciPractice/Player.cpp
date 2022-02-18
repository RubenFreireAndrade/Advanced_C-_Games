#include "Player.h"

Player::Player(std::string name, int mHp, int cHp, int dmg)
{
	characterName = name;
	maxHp = mHp;
	currentHp = cHp;
	damage = dmg;

	inventory = new Inventory();
	character = new Character();
}

Player::~Player()
{
	
}

bool Player::IsAlive()
{
	return currentHp > zeroHealth;
}

void Player::ReceiveDamage(int dmg)
{
	currentHp = currentHp - dmg;
}

void Player::ShowPlayerStats()
{
	std::cout << "============================================" << std::endl;
	std::cout << "	HP:	" << currentHp << std::endl;
	std::cout << "	Damage:	" << damage << std::endl;
}

void Player::ShowPlayerInventory()
{
	inventory->ShowItems();
}

void Player::Pickup(std::string item)
{
	inventory->AddItem(item);
}

void Player::MaxHeal()
{
	currentHp = maxHp;
}

void Player::UseItem(std::string playerChoice)
{
	inventory->CheckItem(playerChoice);
	if (inventory->GetChosenItem() == "Potion")
	{
		MaxHeal();
		std::cout << "Player is now: " << currentHp << " HP" << std::endl;
		system("pause");
	}
}

std::string Player::CheckWeapon()
{
	if (characterName == "Swordsman") return std::string("Sword");
	if (characterName == "Mage") return std::string("Staff");
	if (characterName == "Rogue") return std::string("Dagger");
}

void Player::PickupStarterWeapon(std::string weapon)
{
	inventory->AddItem(weapon);
}
