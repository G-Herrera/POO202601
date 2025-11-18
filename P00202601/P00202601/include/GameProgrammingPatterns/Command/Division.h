#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Command/Operacion.h"

class
Division : public Operacion {
public:
	Division(int& _valor1, int _valor2) : m_valor1(_valor1), m_valor2(_valor2) {};
	~Division() = default;

	void
		ejecutar() override {
		std::cout << "Ejecutando operacion de division." << std::endl;
		m_valor1 = m_valor1 / m_valor2;
	};

	void
		deshacer() override {
		std::cout << "Deshaciendo operacion de division." << std::endl;
		m_valor1 = m_valor1 * m_valor2;
	};

private:
	int& m_valor1;
	int m_valor2;
};