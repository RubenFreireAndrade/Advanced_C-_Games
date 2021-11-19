#pragma once
#include<iostream>
#include<string>

#include"PlayerSelector.h"
#include"Maps.h"
#include"Inventory.h"
#include"Enemy.h"
#include"Player.h"
#include"BattleSystem.h"

class Locations
{
public:

	Locations();
	~Locations();

	void Cave();
	void Dungeon();
	void Forest();
	void Field();
	void CreateEnemy();

private:
	
	PlayerSelector playerSelector;
	Maps* maps;
	Inventory inventory;
	Enemy* enemy;
	Player* player;
	BattleSystem* battleSystem;

	/*struct ItemsExist
	{
		std::string Sword;
		std::string Potion;
	};*/
};

