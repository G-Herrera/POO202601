#pragma once
#include "Prerequisites.h"

class Dispositivo
{
public:
	Dispositivo()  = default;
	~Dispositivo() = default;

	void 
	encender() {
		// Lógica para encender el dispositivo
		std::cout << "Dispositivo encendido" << std::endl;
	}
	void 
	apagar() {
		// Lógica para apagar el dispositivo
		std::cout << "Dispositivo apagado" << std::endl;
	}
};

