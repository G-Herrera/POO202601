#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"

class
	MeleeAttackStrategy : public IAttackStrategy {
public:
	MeleeAttackStrategy() = default;
	~MeleeAttackStrategy() = default;

	int
		Execute(int baseDamage) const override {
		// Implementación del ataque cuerpo a cuerpo
		return static_cast<int>(baseDamage * 1.2); // Ejemplo: daño base más bonificación por ataque cuerpo a cuerpo
	}
};

