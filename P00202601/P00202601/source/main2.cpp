#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/Prototype.h"
#include "ProgrammingPatterns/Prototype/PrototypeConcreto.h"

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
	return 0;
}