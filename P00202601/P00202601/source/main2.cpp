#include "Prerequisites.h"
#include "ProgrammingPatterns/Decorator/ComponenteConcreto.h"
#include "ProgrammingPatterns/Decorator/DecoradorConcretoA.h"
#include "ProgrammingPatterns/Decorator/DecoradorConcretoB.h"
#include "ProgrammingPatterns/Decorator/CafeteriaConcreta.h"
#include "ProgrammingPatterns/Decorator/Leche.h"
#include "ProgrammingPatterns/Decorator/Azucar.h"

int main() {
	//Uso del patron Decorator
	//El siguiente patrn permite agregar responsabilidades adicionales a un objeto de manera dinámica. Funciona de la siguiente manera:
	// 1. Se define una interfaz o clase abstracta (Componente) que declara un método (operacion).
	// 2. Se crean clases concretas (ComponenteConcreto) que implementan la interfaz.
	// 3. Se crea una clase base Decorator que implementa la misma interfaz y contiene una referencia a un objeto Componente.
	// 4. Se crean clases concretas de decoradores (DecoradorConcretoA, DecoradorConcretoB) 
	// que extienden la funcionalidad del componente al agregar comportamiento antes o despues de delegar la operacion al componente envuelto.
	// 5. En tiempo de ejecucion, se pueden envolver objetos Componente con uno o mas decoradores para agregar funcionalidades adicionales de manera flexible.
	// Esto permite combinar diferentes decoradores para crear objetos con comportamientos personalizados sin modificar las clases originales.
	ComponenteConcreto* componente = new ComponenteConcreto();
	DecoradorConcretoA* decoradorA = new DecoradorConcretoA(componente);
	DecoradorConcretoB* decoradorB = new DecoradorConcretoB(decoradorA);

	componente->operacion();
	decoradorA->operacion();
	decoradorB->operacion();

	delete componente;
	delete decoradorA;
	delete decoradorB;

	//Uso del patron Decorator en un ejemplo de cafeteria
	//Creando instancias de cafeteria y agregando condimentos
	CafeteriaConcreta* cafeteria = new CafeteriaConcreta();
	Leche* cafeConLeche = new Leche(cafeteria);
	Azucar* cafeconAzucar = new Azucar(cafeteria);

	cafeteria->prepararCafe();
	cafeConLeche->prepararCafe();
	cafeconAzucar->prepararCafe();

	delete cafeteria;
	delete cafeConLeche;
	delete cafeconAzucar;

	return 0;
}