#pragma once
#include "ProgrammingPatterns/Decorator/Componente.h"

class Decorator : public Componente {
public:
		Decorator(Componente* _componente) : componente(_componente) {}
		~Decorator() = default;

	void 
	operacion() override {
		// Delegar la operación al componente envuelto
		if (componente) {
			componente->operacion();
		}
	}

private:
	Componente* componente;
};