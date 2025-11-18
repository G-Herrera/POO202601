#pragma once

class Operacion {
public:
	Operacion() = default;
	~Operacion()= default;

	virtual void ejecutar() = 0;
	virtual void deshacer() = 0;
};
