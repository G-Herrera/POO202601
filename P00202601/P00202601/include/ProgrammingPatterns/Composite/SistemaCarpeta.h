#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Carpeta.h"
#include "ProgrammingPatterns/Composite/Sistema.h"

class 
SistemaCarpeta : public Carpeta, public Sistema {
public:
	SistemaCarpeta()  = default;
	~SistemaCarpeta() = default;

	void 
	agregarSistema(Sistema* sistema) {
		sistemas.push_back(sistema);
	}

	void 
	mostrarInfo() override {
		Carpeta::mostrarInfo(); //llamar al metodo base de Carpeta
		std::cout << "Sistema de Carpeta: " << std::endl;
		for (auto& sistema : sistemas) {
			sistema->mostrarInfo(); //delegar la muestra de informacion a los elementos hijos
		}
	}



private:
	std::vector<Sistema*> sistemas;
};
