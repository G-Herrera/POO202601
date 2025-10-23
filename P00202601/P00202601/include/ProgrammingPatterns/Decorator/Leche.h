#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Condimento.h"

class 
Leche : public Condimento {
public:
	Leche(Cafeteria* _cafeteria) : Condimento(_cafeteria) {}
	~Leche() = default;

	void prepararCafe() override {
		Condimento::prepararCafe();
		std::cout << "Leche agregada" << std::endl;
	}
};

