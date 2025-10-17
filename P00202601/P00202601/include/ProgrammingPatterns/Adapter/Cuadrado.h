#pragma once
#include "Prerequisites.h"

class 
Cuadrado {
public:
	Cuadrado()  = default;
	~Cuadrado() = default;

	virtual void 
	dibujarCuadrado() {
		std::cout << "Dibujando un cuadrado" << std::endl;
	}
};
