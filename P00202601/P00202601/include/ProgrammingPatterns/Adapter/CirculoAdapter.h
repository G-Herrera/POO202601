#pragma once
#include "ProgrammingPatterns/Adapter/Circulo.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"

class 
CirculoAdapter : public Dibujable {
public:
	CirculoAdapter(Circulo* _circulo) : circulo(_circulo) {}
	~CirculoAdapter() = default;
	
	void 
	dibujar() override {
		std::cout << "Adaptando dibujar a dibujarCirculo" << std::endl;
		circulo->dibujarCirculo();
	}

private:
	Circulo* circulo;
};
