#pragma once
#include"State.h"
#include"Characters.h"
#include"FieldState.h"

#include<vector>
#include<algorithm>

class CharacterCreationState: public State
{

public:

	enum CharacterNames
	{
		SWORDSMAN,
		MAGE,
		ROGUE,
		TOTAL
	};

	CharacterCreationState(Player* p);
	~CharacterCreationState();

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

	void ShowCharacterStats();
	int ConvertString(std::string choice);


private:

	std::vector<Characters*> characters;
	std::vector<Characters*>::iterator iter;

	std::string numbers[3] = { "First", "Second", "Third" };
	std::string chosenCharacter;
	
	Player* player;
	FieldState* fieldState;
	Characters* character;

	// Creating characters.
	Characters* swordsman;
	Characters* mage;
	Characters* rogue;
};

