#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Condimento.h"

class 
Azucar : public Condimento {
public:
	Azucar(Cafeteria* _cafeteria) : Condimento(_cafeteria) {}
	~Azucar() = default;

	void 
	prepararCafe() override {
		Condimento::prepararCafe();
		std::cout << "Azucar agregada" << std::endl;
	}
};
