#pragma once
#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"

// Contexto que utiliza la estrategia de ataque, esta clase permite establecer y cambiar la estrategia de ataque en tiempo de ejecucion
// Funciona de la siguiente manera:
// - Tiene un puntero a la interfaz IAttackStrategy.
// - Permite establecer la estrategia de ataque mediante el método setStrategy.
// - Utiliza la estrategia establecida para realizar un ataque mediante el método attack.
// Esta clase es el "Contexto" en el patrón Strategy.

class 
Player {
public:
	Player()  = default;
	~Player() = default;

	void 
	setStrategy(std::unique_ptr<IAttackStrategy> newStrategy) {
		if (!newStrategy) {
			throw std::invalid_argument("Strategy cannot be null");
		}
		m_strategy = std::move(newStrategy);
	}

	int 
	attack(int baseDamage) const {
		if (!m_strategy) {
			throw std::runtime_error("Attack strategy not set");
		}
		return m_strategy->Execute(baseDamage);
	}

private:
	std::unique_ptr<IAttackStrategy> m_strategy;
};


