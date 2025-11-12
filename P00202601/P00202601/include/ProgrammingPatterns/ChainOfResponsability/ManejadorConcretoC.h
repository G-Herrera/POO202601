#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class
	ManejadorConcretoC : public Manejador {
public:
	ManejadorConcretoC(Manejador* siguiente) : Manejador(siguiente) {}
	~ManejadorConcretoC() = default;

	void manejarPeticion(int peticion) override {
		std::cout << "ManejadorConcretoC manejando peticion: " << peticion << std::endl;
	}

};