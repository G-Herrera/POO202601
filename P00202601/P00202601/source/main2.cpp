#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorDirectivo.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorGerente.h"
#include "ProgrammingPatterns/ChainOfResponsability/ManejadorDG.h"
#include "ProgrammingPatterns/ChainOfResponsability/Solicitud.h"



int main() {
	// Crear la cadena de manejadores
	// ManejadorConcretoC es el último en la cadena, por lo que no tiene siguiente manejador, 
	// este debe ser primero porque la cadena se crea de atrás hacia adelante
	ManejadorDG DirectorGeneral(nullptr);
	ManejadorGerente Gerente(&DirectorGeneral);
	ManejadorDirectivo Directivo(&Gerente);
	Solicitud solicitud1(35564.4);
	Solicitud solicitud2(1354);
	Solicitud solicitud3(6500.45);

	Directivo.manejarPeticion(solicitud1.getMonto());
	Directivo.manejarPeticion(solicitud2.getMonto());
	Directivo.manejarPeticion(solicitud3.getMonto());

	std::cout << std::endl;
	// Peticiones a manejar
	double peticiones[] = {12301.54, 451.15, 1002.25, 8015.4, 6500.45, 300001.1 };
	for (double peticion : peticiones) {
		Directivo.manejarPeticion(peticion);
	}



	return 0;
}