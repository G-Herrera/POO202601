#pragma once
#include "ProgrammingPatterns/Composite/Archivo.h"
#include "ProgrammingPatterns/Composite/Sistema.h"

class
	SistemaArchivo : public Sistema, public Archivo {
public:
	SistemaArchivo(const std::string& _nombre) : nombreArchivo(_nombre) {}
	SistemaArchivo() = default;
	~SistemaArchivo() = default;

	void
		mostrarInfo() override {
		Archivo::mostrarInfo(); //llamar al metodo base de Archivo
		std::cout << "Sistema de Archivo: " << nombreArchivo << std::endl;
	}

private:
	std::string nombreArchivo = "archivo.docs";
};



