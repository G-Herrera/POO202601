#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/InterfazImagen.h"

class
Imagen : public InterfazImagen {
public:
	Imagen(const std::string& nombreArchivo) : m_archivo(nombreArchivo) {}
	~Imagen() = default;
	
	void
	mostrarImagen() override {
		std::cout << "Mostrando la imagen: " << m_archivo << std::endl;
	}

private:
	std::string m_archivo;
};