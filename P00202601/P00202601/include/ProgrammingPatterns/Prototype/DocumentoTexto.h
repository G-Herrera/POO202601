#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/DocumentoPrototype.h"

class DocumentoTexto : public DocumentoPrototype
{
public:
	DocumentoTexto() = default;
	~DocumentoTexto() = default;

	DocumentoPrototype* 
	clone() const override {
		DocumentoTexto* copia = new DocumentoTexto();
		copia->configurar(contenido);
		return copia;
	}
	
	void 
	configurar(std::string _value) const override {
		const_cast<std::string&>(contenido) = _value;
	}

	void 
	mostrar() const override {
		std::cout << "Documento de texto: " << contenido << std::endl;
	}

private:
	std::string contenido;
};
