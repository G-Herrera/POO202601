#pragma once
#include "Prerequisites.h"

class ManejadorAct
{
public:
	ManejadorAct(ManejadorAct* siguiente) : m_siguiente(siguiente) {}
	~ManejadorAct() = default;

	virtual void 
	manejarPeticion(double peticion) {
		if (m_siguiente) {
			m_siguiente->manejarPeticion(peticion);
		}
	}

private:
	ManejadorAct* m_siguiente;
};
