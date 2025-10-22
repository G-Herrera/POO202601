#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Composite.h"
#include "ProgrammingPatterns/Composite/Hoja.h"

int main() {
	// Crear componentes hoja
	//El patr�n Composite permite tratar objetos individuales y compuestos de manera uniforme. Funciona de la siguiente manera:
	// 1. Componente: Define la interfaz com�n para todos los objetos en la composici�n.
	// 2. Hoja: Representa los objetos individuales en la composici�n. Implementa la interfaz del Componente.
	// 3. Compuesto (Composite): Representa los objetos compuestos que pueden contener otros componentes (hojas o compuestos). 
	// Implementa la interfaz del Componente y delega las operaciones a sus hijos.
	// 4. Cliente: Interact�a con los objetos a trav�s de la interfaz del Componente, sin preocuparse por si son hojas o compuestos.
	// Esto permite construir estructuras de objetos en forma de �rbol y tratarlos de manera uniforme.
	Hoja* hoja1 = new Hoja();
	Hoja* hoja2 = new Hoja();
	Composite* composite = new Composite();

	composite->add(hoja1);
	composite->add(hoja2);
	composite->operacion();

	// Liberar memoria
	delete hoja1;
	delete hoja2;
	delete composite;
	


	return 0;
}