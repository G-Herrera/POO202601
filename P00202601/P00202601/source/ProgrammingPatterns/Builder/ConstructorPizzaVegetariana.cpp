#include "ProgrammingPatterns/Builder/ConstructorPizzaVegetariana.h"

ConstructorPizzaVegetariana::ConstructorPizzaVegetariana() {
	pizza = new Pizza();
}

void 
ConstructorPizzaVegetariana::colocarMasa() {
	if (pizza) {
		pizza->add("Masa delgada");
	}
}

void 
ConstructorPizzaVegetariana::colocarSalsa() {
	if (pizza) {
		pizza->add("Salsa de tomate");
	}
}

void 
ConstructorPizzaVegetariana::colocarIngredientes() {
	if (pizza) {
		pizza->add("Pimiento");
		pizza->add("Oliva");
		pizza->add("Cebolla");
		pizza->add("Champiñones");
	}
}

void 
ConstructorPizzaVegetariana::colocarQueso() {
	if (pizza) {
		pizza->add("Queso mozzarella");
		pizza->add("Queso feta");
	}
}

Pizza* 
ConstructorPizzaVegetariana::getPizza() {
	if (pizza) {
		return pizza;
	}
	return nullptr;
}