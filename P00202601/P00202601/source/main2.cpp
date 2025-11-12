#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorConcretoA.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorConcretoB.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorConcretoC.h"



int main() {
	// Crear la cadena de manejadores
	// ManejadorConcretoC es el último en la cadena, por lo que no tiene siguiente manejador, 
	// este debe ser primero porque la cadena se crea de atrás hacia adelante

	ManejadorConcretoC manejadorC(nullptr);
	ManejadorConcretoB manejadorB(&manejadorC);
	ManejadorConcretoA manejadorA(&manejadorB);

	// Peticiones a manejar
	int peticiones[] = { 5, 15, 25, 8, 18, 30 };
	for (int peticion : peticiones) {
		manejadorA.manejarPeticion(peticion);
	}



	return 0;
}