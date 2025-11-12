#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/Manejador.h"

class
ManejadorConcretoB : public Manejador {
public:
	ManejadorConcretoB(Manejador* siguiente) : Manejador(siguiente) {}
	~ManejadorConcretoB() = default;

	void manejarPeticion(int peticion) override {
		if (peticion >= 0 && peticion < 20) {
			// Procesa la peticion
			std::cout << "ManejadorConcretoB manejando peticion: " << peticion << std::endl;
		}
		else {
			// Pasa la peticion al siguiente manejador en la cadena
			Manejador::manejarPeticion(peticion);
		}
	}

};