#include "CharacterCreationState.h"

CharacterCreationState::CharacterCreationState()
{
    swordsman = new Player("Swordsman", 50, 50, 10);
    mage = new Player("Mage", 30, 30, 30);
    rogue = new Player("Rogue", 30, 30, 20);
    player = swordsman;

    characters.push_back(swordsman);
    characters.push_back(mage);
    characters.push_back(rogue);
}

CharacterCreationState::~CharacterCreationState()
{
    
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
        return new FieldState(swordsman);
        break;

    case MAGE:
        return new FieldState(mage);
        break;

    case ROGUE:
        return new FieldState(rogue);
        break;

    default:
        ClearScreen();
        std::cout << "Failed to select character. Try again!" << std::endl;
        std::cout << "===================================================" << std::endl;
        break;
    }
    return nullptr;
}

void CharacterCreationState::ShowCharacterStats()
{
    for (iter = characters.begin(); iter < characters.end(); iter++) 
    {
        std::cout << "===================================================" << std::endl;
        std::cout << " Name: " << (*iter)->characterName << std::endl;
        std::cout << " HP: " << (*iter)->maxHp << std::endl;
        std::cout << " Damage: " << (*iter)->damage << std::endl;
    }
    std::cout << "\n\n";
}

int CharacterCreationState::ConvertString(std::string choice)
{
    chosenCharacter = choice;
    if (chosenCharacter == "Swordsman") return CharacterNames::SWORDSMAN;
    if (chosenCharacter == "Mage") return CharacterNames::MAGE;
    if (chosenCharacter == "Rogue") return CharacterNames::ROGUE;
}
