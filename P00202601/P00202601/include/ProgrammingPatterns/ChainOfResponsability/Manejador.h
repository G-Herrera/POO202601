#pragma once
#include "Prerequisites.h"

// Clase base para los manejadores en la cadena de responsabilidad, funciona como interfaz
// para los manejadores concretos. Su constructor recibe un puntero al siguiente manejador en la cadena.

class 
Manejador {
public:
	Manejador(Manejador* siguiente): m_siguiente(siguiente) {}
	~Manejador()=default;

	// Método virtual puro para manejar la petición, que puede ser sobrescrito por los manejadores concretos.
	// Si el manejador no puede procesar la petición, la pasa al siguiente manejador en la cadena.
	virtual void 
	manejarPeticion(int peticion) {
		if (m_siguiente) {
			m_siguiente->manejarPeticion(peticion);
		}
	}

private:
	// Puntero al siguiente manejador en la cadena
	Manejador* m_siguiente;
};
