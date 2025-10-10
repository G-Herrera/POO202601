#pragma once
#include "Prerequisites.h"

//Clase base para el producto B
class 
ProductoB {
public:
	virtual void 
	operacionB() const = 0;

	virtual 
	~ProductoB() = default;
};
