#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FabricaAbstracta.h"
#include "ProgrammingPatterns/AbstractFactory/ProductoConcretoA.h"
#include "ProgrammingPatterns/AbstractFactory/ProductoConcretoB.h"

class 
FabricaConcreta : public FabricaAbstracta {
public:
	ProductoA* 
	crearProductoA() const override {
		return new ProductoConcretoA();
	}

	ProductoB* 
	crearProductoB() const override {
		return new ProductoConcretoB();
	}
};
