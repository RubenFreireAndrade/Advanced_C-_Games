#pragma once
#include"State.h"
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
		ROGUE
	};

	CharacterCreationState();
	~CharacterCreationState();

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

	void ShowCharacterStats();
	int ConvertString(std::string choice);


private:

	std::vector<Character*> characters;
	std::vector<Character*>::iterator iter;

	std::string numbers[3] = { "First", "Second", "Third" };
	std::string chosenCharacter;

	// Creating characters.
	Player* swordsman;
	Player* mage;
	Player* rogue;
};

