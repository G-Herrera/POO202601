#include "ProgrammingPatterns/AbstractFactory/Mesa.h"

void 
Mesa::descripcion() const {
	std::cout << "Soy una mesa" << std::endl;
}

void 
Mesa::color(const std::string& color) const {
	std::cout << "El color de la mesa es " << color << std::endl;
}