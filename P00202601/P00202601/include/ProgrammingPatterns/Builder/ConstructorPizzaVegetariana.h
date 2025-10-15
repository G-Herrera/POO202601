#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Builder/ConstructorPizza.h"
#include "ProgrammingPatterns/Builder/Pizza.h"

class ConstructorPizzaVegetariana : public ConstructorPizza

{
public:
	ConstructorPizzaVegetariana();
	~ConstructorPizzaVegetariana() = default;

	void
	colocarMasa() override; //Este metodo crea la masa de la pizza sobreescribiendo el metodo virtual puro de la clase base

	void
	colocarSalsa() override; //Este metodo crea la salsa de la pizza sobreescribiendo el metodo virtual puro de la clase base

	void
	colocarIngredientes() override; //Este metodo crea los ingredientes de la pizza sobreescribiendo el metodo virtual puro de la clase base

	void
	colocarQueso() override; //Este metodo crea el queso de la pizza sobreescribiendo el metodo virtual puro de la clase base

	Pizza* 
	getPizza() override; //Este metodo devuelve la pizza creada sobreescribiendo el metodo virtual puro de la clase base
private:
	Pizza* pizza;
};
