#include "Characters.h"

Characters::Characters(std::string characterName, int maxHp, int currentHp, int damage)
{
	this->characterName = characterName;
	this->maxHp = maxHp;
	this->currentHp = currentHp;
	this->damage = damage;
}

Characters::~Characters()
{
	
}
