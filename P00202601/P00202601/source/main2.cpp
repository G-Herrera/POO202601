#include "Prerequisites.h"
#include "GameProgrammingPatterns/Flyweight/FlyweightFactory.h"




int main() {
	// Crear la fábrica de Flyweights
	FlyweightFactory factory;
	// Crear y usar algunos Flyweights
	Flyweight* flyweightA = factory.getFlyweight('A');
	Flyweight* flyweightB = factory.getFlyweight('B');
	Flyweight* flyweightC = factory.getFlyweight('C');
	Flyweight* flyweightD = factory.getFlyweight('D');
	Flyweight* flyweightA2 = factory.getFlyweight('A'); // Debería reutilizar el Flyweight existente

	// Dibujar los Flyweights en diferentes posiciones
	flyweightA->Draw(10, 20);
	flyweightB->Draw(30, 40);
	flyweightC->Draw(50, 60);
	flyweightD->Draw(70, 80);
	flyweightA2->Draw(90, 100); // Debería dibujar el mismo símbolo 'A'

	// Limpiar memoria (en un caso real, la fábrica debería manejar esto)
	delete flyweightA;
	delete flyweightB;
	delete flyweightC;
	delete flyweightD;
	

	return 0;
}