#pragma once

class PizzaClase;
enum INGREDIENTES;

class 
BuilderPizza {
public:
	BuilderPizza()  = default;
	~BuilderPizza() = default;
	
	virtual void 
	buildIngredientes() = 0;
	
	virtual void 
	addIngrediente(INGREDIENTES ingrediente) = 0;

	virtual PizzaClase* 
	getPizza() = 0;

};
