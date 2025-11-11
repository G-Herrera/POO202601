#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Implementacion.h"

//Implementación concreta A	esta clase hereda de Implementacion y proporciona 
// una implementación específica del método operacionImpl().

class ImplementacionConcretaB : public Implementacion
{
public:
	ImplementacionConcretaB() = default;
	~ImplementacionConcretaB() = default;

	void
		operacionImpl() override {
		std::cout << "ImplementacionConcretaB: operacionImpl()" << std::endl;
	}
};