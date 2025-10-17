#pragma once
#include "Prerequisites.h"

class 
Circulo {
public:

	Circulo()  = default;
	~Circulo() = default;

	virtual void 
	dibujarCirculo() {
		std::cout << "Dibujando un circulo" << std::endl;
	}
};