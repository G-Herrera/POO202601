#include "Prerequisites.h"
/*
#include "ProgrammingPatterns/AbstractFactory/FabricaConcreta.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMueblesRusticos.h"
*/
#include "ProgrammingPatterns/Builder/Director.h"
#include "ProgrammingPatterns/Builder/Builder.h"
#include "ProgrammingPatterns/Builder/BuilderConcreto.h"


int main() {
	Builder* builder = new BuilderConcreto();
	Director* director = new Director(builder);

	director->construct();

	Producto* producto = builder->getProducto();
	producto->show();
	delete producto;
	delete director;
	delete builder;

	//Uso de abstract factory
	/*
	FabricaAbstracta* fabrica = new FabricaConcreta();
	ProductoA* productoA = fabrica->crearProductoA();
	ProductoB* productoB = fabrica->crearProductoB();

	productoA->operacionA();
	productoB->operacionB();
	
	delete fabrica;
	delete productoA;
	delete productoB;

	FactoriaMueble* factoriaMueblesRusticos = new FactoriaMueblesRusticos();
	Mesa* mesa = factoriaMueblesRusticos->crearMesa();
	Silla* silla = factoriaMueblesRusticos->crearSilla();

	mesa->descripcion();
	mesa->color("amarilla");
	silla->descripcion();
	silla->color("negra");

	delete factoriaMueblesRusticos;
	delete mesa;
	delete silla;
	*/
	return 0;
}