#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/Cafeteria.h"

class
	CafeteriaConcreta : public Cafeteria {
public:
	CafeteriaConcreta() = default;
	~CafeteriaConcreta() = default;

	void
	prepararCafe() override {
		std::cout << "Cafe preparado" << std::endl;
	}
};
