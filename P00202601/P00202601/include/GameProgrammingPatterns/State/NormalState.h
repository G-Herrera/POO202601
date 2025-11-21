#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class NormalState : public PlayerState
{
public:
	NormalState()  = default;
	~NormalState() = default;

	void 
	Attack() override {
		std::cout << "Normal Attack!" << std::endl;
	}

	void 
	Defend() override {
		std::cout << "Normal Defend!" << std::endl;
	}

	void 
	Move() override {
		std::cout << "Normal Move!" << std::endl;
	}
};
