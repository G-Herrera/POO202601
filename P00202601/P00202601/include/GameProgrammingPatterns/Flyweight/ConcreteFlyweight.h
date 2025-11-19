#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Flyweight/Flyweight.h"

//Implementacion concreta del patrón Flyweight. Aquí es donde se almacenan los datos compartidos.
//Funciona de la siguiente manera: cada instancia de ConcreteFlyweight representa un símbolo que se puede dibujar en diferentes posiciones.
//El símbolo es el estado intrínseco compartido, mientras que las coordenadas (x, y) son el estado extrínseco que varía con cada uso.
//Por ejemplo, si tenemos un juego de cartas, cada carta (como el As de Espadas) puede ser representada por una instancia de ConcreteFlyweight.

class ConcreteFlyweight: public Flyweight {
public:
	ConcreteFlyweight(char _symbol) : m_symbol(_symbol) {}
	~ConcreteFlyweight() = default;

	void
	Draw(int x, int y) override {
		std::cout << "Drawing symbol '" << m_symbol 
		<< "' at (" << x << ", " << y << ")" << std::endl;
	}

private:
	char m_symbol;
};
