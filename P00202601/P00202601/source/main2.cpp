#include "Prerequisites.h"
#include "GameProgrammingPatterns/Command/Calculadora.h"
#include "GameProgrammingPatterns/Command/Suma.h"
#include "GameProgrammingPatterns/Command/Resta.h"
#include "GameProgrammingPatterns/Command/Multiplicacion.h"
#include "GameProgrammingPatterns/Command/Division.h"




int main() {
	int resultado = 0;
	Suma suma(resultado, 5);
	Resta resta(resultado, 3);
	Multiplicacion multi(resultado, 2);
	Division division(resultado, 5);

	Calculadora calculadora;
	calculadora.agregarOperacion(&suma);
	std::cout << "Resultado despues de la suma: " << resultado << std::endl;
	//calculadora.deshacerOperacion();
	//std::cout << "Resultado al deshacer la operacion: " << resultado << std::endl;

	calculadora.agregarOperacion(&resta);
	std::cout << "Resultado despues de la resta: " << resultado << std::endl;
	calculadora.deshacerOperacion();
	std::cout << "Resultado despues de deshacer la resta: " << resultado << std::endl;

	calculadora.agregarOperacion(&multi);
	std::cout << "Resultado despues de la multiplicacion: " << resultado << std::endl;
	calculadora.deshacerOperacion();
	std::cout << "Resultado despues de deshacer la multiplicacion: " << resultado << std::endl;

	calculadora.agregarOperacion(&division);
	std::cout << "Resultado despues de la division: " << resultado << std::endl;
	calculadora.deshacerOperacion();
	std::cout << "Resultado despues de deshacer la division: " << resultado << std::endl;

	return 0;
}