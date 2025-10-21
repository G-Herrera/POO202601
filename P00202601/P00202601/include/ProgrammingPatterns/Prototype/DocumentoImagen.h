#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/DocumentoPrototype.h"

class DocumentoImagen : public DocumentoPrototype
{
public:
	DocumentoImagen()  = default;
	~DocumentoImagen() = default;

	DocumentoPrototype* 
	clone() const override {
		DocumentoImagen* copia = new DocumentoImagen();
		copia->configurar(contenido);
		return copia;
	}

	void 
	configurar(std::string _value) const override {
		const_cast<std::string&>(contenido) = _value;
	}

	void 
	mostrar() const override {
		std::cout << "Documento de imagen: " << contenido << std::endl;
	}	

private:
		std::string contenido;
};