#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class
RageState : public PlayerState {
public:
	RageState() = default;
	~RageState() = default;

	void 
	Attack() override {
		std::cout << "Player is in rage and attacks fiercely!" << std::endl;
	}

	void 
	Defend() override {
		std::cout << "Player is in rage and defends aggressively!" << std::endl;
	}

	void 
	Move() override {
		std::cout << "Player is in rage and moves rapidly!" << std::endl;
	}
};