#include "ProgrammingPatterns/Builder/ConstructorPizzaHawaiana.h"

ConstructorPizzaHawaiana::ConstructorPizzaHawaiana() {
	pizza = new Pizza();
}

void 
ConstructorPizzaHawaiana::colocarMasa() {
	if (pizza) {
		pizza->add("Masa crujiente");
	}
}

void 
ConstructorPizzaHawaiana::colocarSalsa() {
	if (pizza) {
		pizza->add("Salsa de tomate");
	}
}

void 
ConstructorPizzaHawaiana::colocarIngredientes() {
	if (pizza) {
		pizza->add("Jamón");
		pizza->add("Piña");
	}
}

void 
ConstructorPizzaHawaiana::colocarQueso() {
	if (pizza) {
		pizza->add("Queso mozzarella");
	}
}

Pizza* 
ConstructorPizzaHawaiana::getPizza() {
	if (pizza) {
		return pizza;
	}
	return nullptr;
}