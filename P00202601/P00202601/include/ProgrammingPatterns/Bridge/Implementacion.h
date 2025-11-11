#pragma once

//Esta clase es meramente virtual y no tiene atributos ni métodos específicos

class Implementacion
{
public:
	Implementacion() = default;
	~Implementacion() = default;

	virtual void operacionImpl() = 0;
};
