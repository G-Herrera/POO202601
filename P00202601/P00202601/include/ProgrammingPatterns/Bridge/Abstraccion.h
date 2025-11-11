#pragma once
#include "ProgrammingPatterns/Bridge/Implementacion.h"

//La clase Abstraccion define la interfaz de alto nivel que utiliza el cliente. Hereda de implementación

class 
Abstraccion {
public:
	Abstraccion(Implementacion* impl) : implementacion(impl) {}
	~Abstraccion() = default;

	virtual void operacion() = 0;

protected:
	Implementacion* implementacion;
};
