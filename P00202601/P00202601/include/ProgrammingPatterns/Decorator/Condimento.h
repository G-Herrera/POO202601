#pragma once
#include "ProgrammingPatterns/Decorator/Cafeteria.h"

class 
Condimento : public Cafeteria {
public:
	Condimento(Cafeteria* _cafeteria) : cafeteria(_cafeteria) {}
	~Condimento() = default;

	void 
	prepararCafe() override {
			cafeteria->prepararCafe();
	}

private:
	Cafeteria* cafeteria;
};
