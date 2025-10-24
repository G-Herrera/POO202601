#pragma once
#include "Prerequisites.h"

class 
Archivo {
public:
	Archivo() = default;
	~Archivo() = default;

	virtual void
	mostrarInfo() {
		std::cout << "Mostrando informacion del archivo" << std::endl;
	}

};