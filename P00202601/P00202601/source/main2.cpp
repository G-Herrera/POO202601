#include "Prerequisites.h"
/*
#include "ProgrammingPatterns/Prototype/Prototype.h"
#include "ProgrammingPatterns/Prototype/PrototypeConcreto.h"
*/
#include "ProgrammingPatterns/Adapter/InterfazNueva.h"
#include "ProgrammingPatterns/Adapter/InterfazVieja.h"
#include "ProgrammingPatterns/Adapter/Adaptador.h"
#include "ProgrammingPatterns/Adapter/Circulo.h"
#include "ProgrammingPatterns/Adapter/CirculoAdapter.h"
#include "ProgrammingPatterns/Adapter/Cuadrado.h"
#include "ProgrammingPatterns/Adapter/CuadradoAdapter.h"
#include "ProgrammingPatterns/Adapter/Dibujable.h"

int main() {
	//Crear una instancia de la interfaz vieja
	InterfazVieja* objetoViejo = new InterfazVieja();
	InterfazNueva* objetoNuevo = new Adaptador(objetoViejo);

	//Usar el objeto nuevo que adapta el objeto viejo
	objetoNuevo->metodoNuevo();

	//Liberar memoria
	delete objetoNuevo;
	delete objetoViejo;
	
	//Actividad de Adapter con formas: circulo y cuadrado
	Circulo* circulo = new Circulo(); //Esto es como si fuera la clase vieja
	Cuadrado* cuadrado = new Cuadrado(); //Esto es como si fuera la clase vieja
	Dibujable* circuloAdaptado = new CirculoAdapter(circulo); //Adaptador del circulo
	Dibujable* cuadradoAdaptado = new CuadradoAdapter(cuadrado); //Adaptador del cuadrado

	//Usar los objetos adaptados
	circuloAdaptado->dibujar();
	cuadradoAdaptado->dibujar();

	//Liberar memoria
	delete circuloAdaptado;
	delete cuadradoAdaptado;
	delete circulo;
	delete cuadrado;


	/*
	Prototype* prototipo = new PrototypeConcreto();
	prototipo->config("Ejemplo");
	
	//Clonar el prototipo
	Prototype* copia = prototipo->clone();
	prototipo->info();
	copia->config("Copia del Ejemplo");
	copia->info();

	delete prototipo;
	delete copia;
	*/


	return 0;
}