#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Decorator.h"

class
DecoradorConcretoB : public Decorator {
public:
	DecoradorConcretoB(Componente* _componente) : Decorator(_componente) {}
	~DecoradorConcretoB() = default;

	void
	operacion() override {
		//Comportamiento adicional antes de delegar la operacion
		std::cout << "DecoradorConcretoB: Agregando funcionalidad B" << std::endl;
		Decorator::operacion();
	}
};