#pragma once
#include "Prerequisites.h"

class 
Dibujable {
public:
	Dibujable()  = default;
	~Dibujable() = default;

	virtual void 
	dibujar() = 0;
};
