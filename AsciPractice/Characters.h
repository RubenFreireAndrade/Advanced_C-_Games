#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

class Characters
{
public:

	Characters(std::string characterName, int maxHp, int currentHp, int damage);
	~Characters();

	//int attackSpeed;
	int currentHp;
	int damage;
	int maxHp;
	std::string characterName;

private:

};

