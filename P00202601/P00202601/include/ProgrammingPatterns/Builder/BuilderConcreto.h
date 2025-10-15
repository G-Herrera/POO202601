#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Builder/Builder.h"
#include "ProgrammingPatterns/Builder/Producto.h"

class 
BuilderConcreto : public Builder {
public:
	BuilderConcreto();
	~BuilderConcreto() = default;

	void 
	buildParteA() override; //Este metodo crea la parte A del producto sobreescribiendo el metodo virtual puro de la clase base
	void 
	buildParteB() override; //Este metodo crea la parte B del producto sobreescribiendo el metodo virtual puro de la clase base
	Producto* 
	getProducto() override; //Este metodo devuelve el producto creado sobreescribiendo el metodo virtual puro de la clase base

private:
	Producto* producto;
};
