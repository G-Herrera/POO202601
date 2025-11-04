#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/InterfazImagen.h"
#include "ProgrammingPatterns/Proxy/Imagen.h"

class 
ProxyImagen : public InterfazImagen {
public:
	ProxyImagen() : imagenReal(nullptr) {}
	~ProxyImagen() = default;

	void 
	mostrarImagen() override {
		if (imagenReal == nullptr) {
			imagenReal = new Imagen("foto_ejemplo.jpg");
		}
		std::cout << "ProxyImagen: Controlando el acceso a la Imagen real." << std::endl;
		imagenReal->mostrarImagen();
	}

private:
	Imagen* imagenReal;

};
