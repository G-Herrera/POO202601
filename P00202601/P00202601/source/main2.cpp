#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/ControlRemoto.h"
#include "ProgrammingPatterns/Bridge/TV.h"
#include "ProgrammingPatterns/Bridge/Radio.h"


int main() {
	
	TV tv;
	Radio radio;

	ControlRemoto controlRemotoTV(&tv);
	ControlRemoto controlRemotoRadio(&radio);

	controlRemotoTV.encenderDispositivo();
	controlRemotoTV.apagarDispositivo();

	controlRemotoRadio.encenderDispositivo();
	controlRemotoRadio.apagarDispositivo();

	return 0;
}