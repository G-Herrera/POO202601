#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Componente.h"

class 
ComponenteConcreto : public Componente {
public:
	ComponenteConcreto() = default;
	~ComponenteConcreto() = default;

	void 
	operacion() override {
		// Implementación específica del componente concreto
		std::cout << "Operacion realizada en el componente concreto" << std::endl;
	}
};