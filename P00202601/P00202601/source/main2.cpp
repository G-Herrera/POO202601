#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Abstraccion.h"
#include "ProgrammingPatterns/Bridge/AbstraccionRefinada.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaA.h"
#include "ProgrammingPatterns/Bridge/ImplementacionConcretaB.h"


int main() {
	ImplementacionConcretaA implA;
	ImplementacionConcretaB implB;

	AbstraccionRefinada abstraccionRefinadaA(&implA);
	AbstraccionRefinada abstraccionRefinadaB(&implB);

	abstraccionRefinadaA.operacion();
	abstraccionRefinadaB.operacion();

	return 0;
}