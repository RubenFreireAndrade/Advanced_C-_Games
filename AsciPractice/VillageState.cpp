#include "VillageState.h"

VillageState::VillageState(Player* p)
{
    player = p;
    map = new Maps("mapVillage");
}

VillageState::~VillageState()
{

}

void VillageState::Update()
{
    map->Draw();
    std::cout << "You have entered a Village." << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "TO BE CONTINUED..." << std::endl;
    PauseGameplay();
}

State* VillageState::ChangeState()
{
    return nullptr;
}
