#pragma once
#include "ProgrammingPatterns/Bridge/Abstraccion.h"

// La clase AbstraccionRefinada extiende la funcionalidad de la clase Abstraccion
class AbstraccionRefinada : public Abstraccion
{
public:
	AbstraccionRefinada(Implementacion* impl) : Abstraccion(impl) {}
	~AbstraccionRefinada() = default;

	void operacion() override
	{
		// Lógica adicional para la operación refinada
		implementacion->operacionImpl();
	}
};
