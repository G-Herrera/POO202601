#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Observer.h"

class 
TermometroDigital : public Observer {
public:
	TermometroDigital() = default;
	~TermometroDigital() = default;

	void
		notificar(int _value) override {
		std::cout << "Termometro Digital: La temperatura es " << _value << " grados Celsius." << std::endl;
	}
};