#pragma once
#include "Prerequisites.h"

//Patron de diseño Strategy, funciona de la siguiente manera: 
// Definimos una interfaz común para todas las estrategias (IAttackStrategy).
// Cada estrategia concreta implementa esta interfaz (por ejemplo, MeleeAttack, RangedAttack, MagicAttack).
// El contexto (Character) utiliza una referencia a la interfaz para ejecutar la estrategia seleccionada en tiempo de ejecución.
// Esto permite cambiar el comportamiento del ataque de un personaje sin modificar su código, promoviendo la flexibilidad y la reutilización del código.
// Esto es especialmente útil en juegos donde los personajes pueden tener diferentes estilos de ataque que pueden cambiar durante el juego.
//Definición de la interfaz para las estrategias de ataque, es una clase abstracta con un método virtual puro.

class IAttackStrategy {
public:
	virtual ~IAttackStrategy() = default;
	virtual int Execute(int baseDamage) const = 0;	
};