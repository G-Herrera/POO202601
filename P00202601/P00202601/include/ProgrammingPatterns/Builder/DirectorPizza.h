#pragma once
#include "ProgrammingPatterns/Builder/ConstructorPizza.h"

class 
DirectorPizza {
public:
	DirectorPizza(ConstructorPizza* _constructorPizza) : 
	constructorPizza(_constructorPizza) {};
	~DirectorPizza() = default;

	void construct() {
		if (constructorPizza) {
			constructorPizza->colocarMasa();
			constructorPizza->colocarSalsa();
			constructorPizza->colocarIngredientes();
			constructorPizza->colocarQueso();
		}
	}

private:
	ConstructorPizza* constructorPizza;
};

