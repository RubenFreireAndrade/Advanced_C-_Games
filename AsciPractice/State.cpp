#include"State.h"
#include"InventoryState.h"

State* State::GlobalChangeState()
{
	// Any state will change to inventory state if playerChoice is inventory. 
	if (playerChoice == "inv")
	{
		return new InventoryState(player);
	}
	return nullptr;
}

Enemy* State::CreateEnemy()
{
	srand(time(0));
	int generateEnemy = rand() % 4 + 1;

	switch (generateEnemy)
	{
	case 1:

		return new Enemy("Pikachu", 20, 10);

	case 2:

		return new Enemy("Wolf", 50, 10);

	case 3:

		return new Enemy("Goblin", 30, 20);

	case 4:

		return new Enemy("Slime", 10, 20);

	default:

		return new Enemy("Broken Enemy", 1, 1);
	}
}

void State::SetPreviousState(State* state)
{
	previousState = state;
}
