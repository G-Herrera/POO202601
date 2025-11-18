#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorAct.h"

class
	ManejadorGerente : public ManejadorAct {
public:
	ManejadorGerente(ManejadorAct* siguiente) : ManejadorAct(siguiente) {}
	~ManejadorGerente() = default;

	void
		manejarPeticion(double peticion) override {
		if (peticion > 5000  && peticion <= 10000) {
			// Procesa la peticion
			std::cout << "Manejador Gerente manejando peticion: " << peticion << std::endl;
		}
		else {
			// Pasa la peticion al siguiente manejador en la cadena
			ManejadorAct::manejarPeticion(peticion);
		}
	}
};