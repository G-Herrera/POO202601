#include "ProgrammingPatterns/AbstractFactory/Silla.h"

void 
Silla::descripcion() const {
	std::cout << "Soy una silla" << std::endl;
}

void 
Silla::color(const std::string& color) const {
	std::cout << "El color de la silla es " << color << std::endl;
}