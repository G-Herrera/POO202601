#pragma once
#include "ProgrammingPatterns/Builder/BuilderPizzaClase/BuilderPizza.h"
#include "ProgrammingPatterns/Builder/BuilderPizzaClase/Pizza.h"

class
	BuilderPizzaHawaiana : public BuilderPizza {
public:
	BuilderPizzaHawaiana() {
		pizza = new PizzaClase();
	}
	~BuilderPizzaHawaiana() {
		delete pizza;
	}

	void
		buildIngredientes() override {
		pizza->addIngredientes(JAMON);
		pizza->addIngredientes(QUESO);
		pizza->addIngredientes(TOMATE);
		pizza->addIngredientes(PINA);
	}

	void
		addIngrediente(INGREDIENTES ingrediente) override {
		pizza->addIngredientes(ingrediente);
	}

	PizzaClase*
		getPizza() override {
		return pizza;
	}

private:
	PizzaClase* pizza;
};
