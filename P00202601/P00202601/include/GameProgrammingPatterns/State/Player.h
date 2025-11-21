#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"
#include "GameProgrammingPatterns/State/NormalState.h"

class Player
{
public:
	Player() : m_currentState(new NormalState()) {}
	~Player() = default;

	void 
	SetState(PlayerState* state) {
		delete m_currentState;
		m_currentState = state;
	}

	void 
	Attack() {
		m_currentState->Attack();
	}

	void 
	Defend() {
		m_currentState->Defend();
	}

	void 
	Move() {
		m_currentState->Move();
	}	

private:
	PlayerState* m_currentState;
};

