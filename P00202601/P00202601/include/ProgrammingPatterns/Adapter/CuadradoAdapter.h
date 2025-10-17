#pragma once
#include "ProgrammingPatterns/Adapter/Cuadrado.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"

class 
CuadradoAdapter : public Dibujable {
public:
	CuadradoAdapter(Cuadrado* _cuadrado) : cuadrado(_cuadrado) {}
	~CuadradoAdapter() = default;
	
	void 
	dibujar() override {
		std::cout << "Adaptando dibujar a dibujarCuadrado" << std::endl;
		cuadrado->dibujarCuadrado();
	}

private:
	Cuadrado* cuadrado;
};
