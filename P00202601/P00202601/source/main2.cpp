#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/Player.h"
#include "GameProgrammingPatterns/Strategy/MeleeAttackStrategy.h"
#include "GameProgrammingPatterns/Strategy/RangedAttackStrategy.h"
#include "GameProgrammingPatterns/Strategy/MagicAttackStrategy.h"

int main() {
	// Crear un jugador
	Player player;
	int baseDamage = 100;
	// Establecer y usar la estrategia de ataque cuerpo a cuerpo
	player.setStrategy(std::make_unique<MeleeAttackStrategy>());
	int meleeDamage = player.attack(baseDamage);
	std::cout << "Melee Attack Damage: " << meleeDamage << std::endl;
	// Establecer y usar la estrategia de ataque a distancia
	player.setStrategy(std::make_unique<RangedAttackStrategy>());
	int rangedDamage = player.attack(baseDamage);
	std::cout << "Ranged Attack Damage: " << rangedDamage << std::endl;
	// Establecer y usar la estrategia de ataque magico
	player.setStrategy(std::make_unique<MagicAttackStrategy>());
	int magicDamage = player.attack(baseDamage);
	std::cout << "Magic Attack Damage: " << magicDamage << std::endl;
	

	return 0;
}