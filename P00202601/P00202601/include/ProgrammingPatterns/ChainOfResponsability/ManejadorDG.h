#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorAct.h"

class
ManejadorDG : public ManejadorAct {
public:
	ManejadorDG(ManejadorAct* siguiente) : ManejadorAct(siguiente) {}
	~ManejadorDG() = default;

	void manejarPeticion(double peticion) override {
		std::cout << "Manejador Directivo general manejando peticion: " 
		<< peticion << std::endl;
	}
};