#pragma once

class Pizza;

class 
ConstructorPizza {
public:
	ConstructorPizza() = default;
	~ConstructorPizza() = default;

	virtual 
	void colocarMasa() = 0;

	virtual 
	void colocarSalsa() = 0;

	virtual 
	void colocarIngredientes() = 0;

	virtual 
	void colocarQueso() = 0;

	virtual Pizza* 
	getPizza() = 0;
};
