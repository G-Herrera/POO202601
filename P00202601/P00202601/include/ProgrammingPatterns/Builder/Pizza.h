#pragma once
#include "Prerequisites.h"

class Pizza
{
public:
	Pizza() = default;
	~Pizza() = default;

	void 
	add(const std::string& parte) {
		partes.push_back(parte);
	}
	
	void show() const {
		std::cout << "Pizza creada con las siguientes partes:" << std::endl;
		for (const auto& parte : partes) {
			std::cout << "- " << parte << std::endl;
		}
	}
private:
	std::vector<std::string> partes;
};
