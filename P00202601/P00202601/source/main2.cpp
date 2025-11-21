#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/Player.h"
#include "GameProgrammingPatterns/State/NormalState.h"
#include "GameProgrammingPatterns/State/HurtState.h"
#include "GameProgrammingPatterns/State/RageState.h"




int main() {
	Player* player = new Player();
	player->Attack();
	player->Defend();
	player->Move();
	std::cout << "Player gets hurt!" << std::endl;
	player->SetState(new HurtState());
	player->Attack();
	player->Defend();
	player->Move();
	std::cout << "Player enters rage mode!" << std::endl;
	player->SetState(new RageState());
	player->Attack();
	player->Defend();
	player->Move();
	std::cout << "Player calms down to normal state." << std::endl;
	player->SetState(new NormalState());
	player->Attack();
	player->Defend();
	player->Move();
	delete player;

	return 0;
}