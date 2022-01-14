#include "CharacterCreationState.h"

CharacterCreationState::CharacterCreationState(Player* p)
{
    player = p;
    swordsman = new Characters("Swordsman", 50, 50, 10);
    mage = new Characters("Mage", 30, 30, 30);
    rogue = new Characters("Rogue", 30, 30, 20);

    characters.push_back(swordsman);
    characters.push_back(mage);
    characters.push_back(rogue);
}

CharacterCreationState::~CharacterCreationState()
{
    delete swordsman;
    delete mage;
    delete rogue;
}

void CharacterCreationState::Update()
{
    std::cout << "          === CHARACTER SELECTOR ===" << std::endl;
    ShowCharacterStats();
    std::cout << "Choose Your Character!" << std::endl;
    std::cin >> playerChoice;
}

State* CharacterCreationState::ChangeState()
{
    switch (ConvertString(playerChoice))
    {
    case SWORDSMAN:
        return new FieldState(player);
        break;

    case MAGE:
        return new FieldState(player);
        break;

    case ROGUE:
        return new FieldState(player);
        break;
    }
    return nullptr;
}

void CharacterCreationState::ShowCharacterStats()
{
    for (iter = characters.begin(); iter < characters.end(); iter++) 
    {
        std::cout << "===================================================" << std::endl;
        
        /*for (auto i = 0; i < 3; i++)
        {
            std::cout << numbers[i] << " Character" << std::endl;
        }*/
        std::cout << " Name: " << (*iter)->characterName << std::endl;
        std::cout << " HP: " << (*iter)->maxHp << std::endl;
        std::cout << " Damage: " << (*iter)->damage << std::endl;
    }
}

int CharacterCreationState::ConvertString(std::string choice)
{
    chosenCharacter = choice;
    if (chosenCharacter == "Swordsman") return CharacterNames::SWORDSMAN;
    if (chosenCharacter == "Mage") return CharacterNames::MAGE;
    if (chosenCharacter == "Rogue") return CharacterNames::ROGUE;
}
