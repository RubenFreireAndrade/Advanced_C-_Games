#include "Player.h"

Player::Player(Player* p, int hp, int dmg)
{
	damage = dmg;
	currentHP = hp;
	maxHP = hp;
	player = p;
	inventory = new Inventory();
}

Player::~Player()
{

}

bool Player::IsAlive()
{
	return currentHP > 0;
}

void Player::ReceiveDamage(int dmg)
{
	currentHP = currentHP - dmg;
}

void Player::ShowPlayerStats()
{
	std::cout << "============================================" << std::endl;
	std::cout << "	HP:	" << currentHP << std::endl;
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
	currentHP = maxHP;
}

void Player::UseItem(std::string playerChoice)
{
	inventory->CheckItem(playerChoice);
	if (inventory->GetChosenItem() == "Potion")
	{
		MaxHeal();
		std::cout << "Player is now: " << currentHP << " HP" << std::endl;
		system("pause");
	}
}
