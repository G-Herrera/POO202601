#include "Prerequisites.h"
/*
#include "ProgrammingPatterns/AbstractFactory/FabricaConcreta.h"
#include "ProgrammingPatterns/AbstractFactory/FactoriaMueblesRusticos.h"
*/
#include "ProgrammingPatterns/Builder/Director.h"
#include "ProgrammingPatterns/Builder/Builder.h"
#include "ProgrammingPatterns/Builder/BuilderConcreto.h"
#include "ProgrammingPatterns/Builder/DirectorPizza.h"
#include "ProgrammingPatterns/Builder/ConstructorPizza.h"
#include "ProgrammingPatterns/Builder/ConstructorPizzaHawaiana.h"
#include "ProgrammingPatterns/Builder/ConstructorPizzaVegetariana.h"
#include "ProgrammingPatterns/Builder/BuilderPizzaClase/BuilderPizza.h"
#include "ProgrammingPatterns/Builder/BuilderPizzaClase/BuilderPizzaHawaiana.h"
#include "ProgrammingPatterns/Builder/BuilderPizzaClase/Pizza.h"

int main() {
	Builder* builder = new BuilderConcreto();
	Director* director = new Director(builder);

	director->construct();

	Producto* producto = builder->getProducto();
	producto->show();
	delete producto;
	delete director;
	delete builder;

	//Uso de builder para crear pizzas
	ConstructorPizza* constructorPizza = new ConstructorPizzaHawaiana();
	DirectorPizza* directorPizza = new DirectorPizza(constructorPizza);
	directorPizza->construct();
	Pizza* pizza = constructorPizza->getPizza();
	pizza->show();

	delete pizza;
	delete directorPizza;
	delete constructorPizza;

	ConstructorPizza* constructorPizza2 = new ConstructorPizzaVegetariana();
	DirectorPizza* directorPizza2 = new DirectorPizza(constructorPizza2);
	directorPizza2->construct();
	Pizza* pizza2 = constructorPizza2->getPizza();
	pizza2->show();

	delete pizza2;
	delete directorPizza2;
	delete constructorPizza2;

	//Uso de builder pizza visto en clase
	BuilderPizza* builderHawaiana = new BuilderPizzaHawaiana();
	builderHawaiana->addIngrediente(ACEITUNAS);
	builderHawaiana->addIngrediente(CHAMPINONES);
	builderHawaiana->addIngrediente(QUESO);
	builderHawaiana->addIngrediente(QUESO);
	builderHawaiana->buildIngredientes();

	PizzaClase* pizzaHawaiana = builderHawaiana->getPizza();
	pizzaHawaiana->show();

	delete pizzaHawaiana;
	delete builderHawaiana;
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