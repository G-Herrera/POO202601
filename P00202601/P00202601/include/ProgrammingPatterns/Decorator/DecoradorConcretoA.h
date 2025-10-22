#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Decorator.h"

class 
DecoradorConcretoA : public Decorator {
public:
	DecoradorConcretoA(Componente* _componente) : Decorator(_componente) {}
	~DecoradorConcretoA() = default;

	void 
	operacion() override {
		//Comportamiento adicional antes de delegar la operacion
		std::cout << "DecoradorConcretoA: Agregando funcionalidad A" << std::endl;
		Decorator::operacion();
	}
};