#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/ProductoA.h"

class 
ProductoConcretoA : public ProductoA {
public:
	void 
	operacionA() const override;
};
