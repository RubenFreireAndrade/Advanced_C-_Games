#include "Enemy.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Enemy::Enemy(std::string name, int hp, int dmg)
{
	monsterName = name;
	currentHP = hp;
	damage = dmg;
}

Enemy::~Enemy()
{

}

void Enemy::ShowEnemy()
{
	std::cout << "======================================================================" << std::endl;

	std::cout << "A" << monsterName << " Appeared!" << std::endl;
	std::cout << "	With: " << currentHP << "HP" << std::endl;
	std::cout << "	And damage of: " << damage << std::endl;
}

void Enemy::CreateEnemy()
{
	srand(time(0));
	int generateEnemy = rand() % 4 + 1;

	switch (generateEnemy)
	{
	case 1:

		new Enemy("Pikachu", 20, 10);

		break;

	case 2:

		new Enemy("Wolf", 50, 10);

		break;

	case 3:

		new Enemy("Goblin", 30, 20);

		break;

	case 4:

		new Enemy("Slime", 10, 20);

		break;

	default:

		new Enemy("Broken Enemy", 1, 1);

		break;
	}
	//ShowEnemy();
}

void Enemy::ReceiveDamage(int dmg)
{
	currentHP = currentHP - dmg;
}

bool Enemy::IsAlive()
{
	return currentHP > 0;
}

int Enemy::GetEnemyHealth()
{
	return currentHP;
}

std::string Enemy::GetEnemyName()
{
	return monsterName;
}

int Enemy::GetEnemydamage()
{
	return damage;
}
