#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Carpeta.h"
#include "ProgrammingPatterns/Composite/Sistema.h"

class 
SistemaCarpeta : public Carpeta, public Sistema {
public:
	SistemaCarpeta(const std::string& _nombre) : nombreCarpeta(_nombre) {}
	SistemaCarpeta()  = default;
	~SistemaCarpeta() = default;

	void 
	agregarSistema(Sistema* sistema) {
		sistemas.push_back(sistema);
	}

	void 
	mostrarInfo() override {
		std::cout << "Sistema de Carpeta: " << nombreCarpeta << std::endl;
		for (auto& sistema : sistemas) {
			sistema->mostrarInfo(); //delegar la muestra de informacion a los elementos hijos
		}
	}



private:
	std::string nombreCarpeta = "NuevaCarpeta";
	std::vector<Sistema*> sistemas;
};
