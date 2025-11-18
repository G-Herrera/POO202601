#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorAct.h"

class 
ManejadorDirectivo : public ManejadorAct {
public:
	ManejadorDirectivo(ManejadorAct* siguiente) : ManejadorAct(siguiente) {}
	~ManejadorDirectivo() = default;

	void 
	manejarPeticion(double peticion) override {
		if (peticion >= 0 && peticion <= 5000) {
			// Procesa la peticion
			std::cout << "ManejadorDirectivo manejando peticion: " << peticion << std::endl;
		}
		else {
			// Pasa la peticion al siguiente manejador en la cadena
			ManejadorAct::manejarPeticion(peticion);
		}
	}
};