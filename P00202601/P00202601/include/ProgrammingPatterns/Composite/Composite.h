#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Componente.h"

class 
Composite: public Componente {
public:
	Composite()  = default;
	~Composite() = default;

	void 
	operacion() override {
		std::cout << "Operacion realizada en el componente compuesto" << std::endl;
		for (auto& child : children) {
			child->operacion(); //delegar la operacion a los hijos
		}
	}

	void 
	add(Componente* componente) {
		children.push_back(componente);
	}
private:
	std::vector<Componente*> children;//Hojas o componenetes hijos
};
