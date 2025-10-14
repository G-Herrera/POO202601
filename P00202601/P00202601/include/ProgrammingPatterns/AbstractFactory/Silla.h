#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/Mueble.h"

class 
Silla : public Mueble {
public:
	void 
	descripcion() const override;

	void 
	color(const std::string& color) const override;
};
