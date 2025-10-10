#pragma once
#include "Prerequisites.h"

//Forward declarations: esto es necesario para evitar dependencias circulares, las 
//declaraciones adelantadas indican al compilador que estas clases existen, pero no
//proporcionan detalles sobre su estructura.

class ProductoA;
class ProductoB;

//Fabrica Abstracta
class FabricaAbstracta
{
public:
	virtual ProductoA* 
	crearProductoA() const = 0;
	virtual ProductoB* 
	crearProductoB() const = 0;
	virtual 
	~FabricaAbstracta() = default;
};
