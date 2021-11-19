#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"Enemy.h"
#include"Player.h"

class BattleSystem
{
public:

	BattleSystem();
	~BattleSystem();

	void Battle(Enemy* enemy, Player* player);

private:

	Enemy* enemy;
	Player* player;
};

