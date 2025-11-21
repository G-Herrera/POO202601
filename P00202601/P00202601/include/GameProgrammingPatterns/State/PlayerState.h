#pragma once

class PlayerState
{
public:
	PlayerState()  =default;
	~PlayerState() =default;

	virtual void Attack() = 0;
	virtual void Defend() = 0;
	virtual void Move() = 0;
};
