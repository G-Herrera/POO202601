#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/Prototype.h"
#include "ProgrammingPatterns/Prototype/PrototypeConcreto.h"
#include "ProgrammingPatterns/Prototype/DocumentoPrototype.h"
#include "ProgrammingPatterns/Prototype/DocumentoTexto.h"
#include "ProgrammingPatterns/Prototype/DocumentoImagen.h"

int main() {

	Prototype* prototipo = new PrototypeConcreto();
	prototipo->config("Ejemplo");
	
	//Clonar el prototipo
	Prototype* copia = prototipo->clone();
	prototipo->info();
	copia->config("Copia del Ejemplo");
	copia->info();

	delete prototipo;
	delete copia;

	//Documento Prototype
	//Crear instancia de DocumentoTexto
	DocumentoPrototype* docTexto = new DocumentoTexto();
	docTexto->configurar("Contenido del documento de texto");

	//Crear instancia de DocumentoImagen
	DocumentoPrototype* docImagen = new DocumentoImagen();
	docImagen->configurar("Contenido del documento de imagen");

	//Clonar los documentos
	DocumentoPrototype* docTextoCopia = docTexto->clone();
	DocumentoPrototype* docImagenCopia = docImagen->clone();
	docTextoCopia->configurar("Copia del contenido del documento de texto");
	docImagenCopia->configurar("Copia del contenido del documento de imagen");
	
	//Mostrar los documentos originales y las copias
	docTexto->mostrar();
	docTextoCopia->mostrar();
	docImagen->mostrar();
	docImagenCopia->mostrar();

	//Liberar memoria
	delete docTexto;
	delete docImagen;
	delete docTextoCopia;
	delete docImagenCopia;


	return 0;
}