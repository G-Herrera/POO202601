#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Implementacion.h"

//Implementación concreta A	esta clase hereda de Implementacion y proporciona 
// una implementación específica del método operacionImpl().

class ImplementacionConcretaA : public Implementacion
{
public:
	ImplementacionConcretaA()  = default;
	~ImplementacionConcretaA() = default;

	void 
	operacionImpl() override {
		std::cout << "ImplementacionConcretaA: operacionImpl()" << std::endl;
	}
};

