#pragma once
#include "Prerequisites.h"

class 
DocumentoPrototype {
public:
	DocumentoPrototype()  = default;
	~DocumentoPrototype() = default;

	virtual DocumentoPrototype* 
	clone() const = 0;

	virtual void 
	configurar(std::string _value ) const = 0;

	virtual void 
	mostrar() const = 0;
};
