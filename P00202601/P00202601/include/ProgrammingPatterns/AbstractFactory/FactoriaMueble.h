#pragma once
#include "Prerequisites.h"

class Mesa;
class Silla;

//Fabrica Abstracta
class 
FactoriaMueble {
public:
	virtual Mesa* 
	crearMesa() const = 0;
	virtual Silla* 
	crearSilla() const = 0;
	~FactoriaMueble() = default;
};