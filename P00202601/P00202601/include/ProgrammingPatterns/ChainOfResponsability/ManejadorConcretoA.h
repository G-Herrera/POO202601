#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class
ManejadorConcretoA : public Manejador {
public:
	ManejadorConcretoA(Manejador* siguiente) : Manejador(siguiente) {}
	~ManejadorConcretoA() = default;

	void manejarPeticion(int peticion) override {
		if (peticion >= 0 && peticion < 10) {
			// Procesa la peticion
			std::cout << "ManejadorConcretoA manejando peticion: " << peticion << std::endl;
		} else {
			// Pasa la peticion al siguiente manejador en la cadena
			Manejador::manejarPeticion(peticion);
		}
	}

};