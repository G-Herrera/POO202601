#pragma once
#include "Prerequisites.h"

//Clase base para muebles
class 
Mueble {
public:
	virtual void 
	descripcion() const = 0;
	virtual void 
	color(const std::string& color) const = 0;
	~Mueble() = default;
};
