#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMueble.h"
#include "ProgrammingPatterns/AbstractFactory/Mesa.h"
#include "ProgrammingPatterns/AbstractFactory/Silla.h"

class 
FactoriaMueblesRusticos : public FactoriaMueble {
public:
	Mesa* 
	crearMesa() const override {
		return new Mesa();
	}

	Silla* crearSilla() const override {
		return new Silla();
	}
};
