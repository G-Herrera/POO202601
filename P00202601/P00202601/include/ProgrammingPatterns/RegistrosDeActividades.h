#pragma once
#include "Prerequisites.h"

//Practica de patron Singleton

class 
RegistroDeActividades{
private:
	RegistroDeActividades()=default;
	~RegistroDeActividades();

public:

	static RegistroDeActividades* 
	getInstance() {
		if (instance == nullptr) {
			instance = new RegistroDeActividades();
		}
		return instance;
	}

	void 
	registrarActividad(const std::string& actividad) {
		actividades.push_back(actividad);
	}

	std::vector<std::string> 
	getActividades() const {
		return actividades;
	}

private:
	static RegistroDeActividades* instance;
	std::vector<std::string> actividades;
};

