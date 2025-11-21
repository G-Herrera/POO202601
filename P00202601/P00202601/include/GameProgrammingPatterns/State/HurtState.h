#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class
HurtState : public PlayerState {
public:
	HurtState() = default;
	~HurtState() = default;

	void 
	Attack() override {
		std::cout << "Player is hurt and attacks weakly." << std::endl;
	}
	void 
	Defend() override {
		std::cout << "Player is hurt and defends poorly." << std::endl;
	}
	void 
	Move() override {
		std::cout << "Player is hurt and moves slowly." << std::endl;
	}
};