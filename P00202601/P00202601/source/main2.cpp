#include "Prerequisites.h"
#include "ProgrammingPatterns/AbstractFactory/FabricaConcreta.h"

int main() {
	FabricaAbstracta* fabrica = new FabricaConcreta();
	ProductoA* productoA = fabrica->crearProductoA();
	ProductoB* productoB = fabrica->crearProductoB();

	productoA->operacionA();
	productoB->operacionB();
	
	delete fabrica;
	delete productoA;
	delete productoB;
	return 0;
}