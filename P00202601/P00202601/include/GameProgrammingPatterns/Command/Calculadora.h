#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Command/Operacion.h"

class 
Calculadora {
public:
	void 
	agregarOperacion(Operacion* operacion) {
		operacion->ejecutar();
		m_operaciones.push_back(operacion);
	}

	void deshacerOperacion() {
		if (!m_operaciones.empty()) {
			Operacion* ultimaOperacion = m_operaciones.back();
			ultimaOperacion->deshacer();
			m_operaciones.pop_back();
		}
	}

private:
	std::vector<Operacion*> m_operaciones;
};