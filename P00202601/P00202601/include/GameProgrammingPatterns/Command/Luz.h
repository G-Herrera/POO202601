#pragma once
#include "Prerequisites.h"
//Clase Luz que representa una luz en el sistema, es una clase receptora en el patron Command

class 
Luz {
public:
	Luz() = default;
	~Luz() = default;
	
	void 
	encender() {
		// Lógica para encender la luz
		std::cout << "La luz se ha encendido." << std::endl;
	}

	void 
	apagar() {
		// Lógica para apagar la luz
		std::cout << "La luz se ha apagado." << std::endl;
	}
};
