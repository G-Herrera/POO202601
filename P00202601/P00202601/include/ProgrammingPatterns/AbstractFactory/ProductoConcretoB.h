#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/ProductoB.h"

class 
ProductoConcretoB : public ProductoB {
public:
	void 
	operacionB() const override;
};
