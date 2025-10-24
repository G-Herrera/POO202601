#pragma once
#include "Prerequisites.h"


class 
Carpeta {
public:
	Carpeta() = default;
	~Carpeta() = default;

	virtual void
	mostrarInfo() {
		std::cout << "Mostrando informacion de la carpeta" << std::endl;
	}
};
