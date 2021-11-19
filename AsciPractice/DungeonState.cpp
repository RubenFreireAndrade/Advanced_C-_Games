#include "DungeonState.h"

DungeonState::DungeonState(Player* p)
{
    player = p;
    map = new Maps("mapDungeon");
}

void DungeonState::Update()
{
    system("CLS");
    map->Draw();
    std::cout << "You are in a Dungeon." << std::endl;
    std::cout << "===========================================" << std::endl;
}

State* DungeonState::ChangeState()
{
    return nullptr;
}
