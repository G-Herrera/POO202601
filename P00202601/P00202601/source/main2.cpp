#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/SensorTemperatura.h"
#include "GameProgrammingPatterns/Observer/TermometroDigital.h"

int main() {
	SensorTemperatura sensor;
	TermometroDigital termometro;
	sensor.addObserver(&termometro);
	sensor.setTemperatura(25);
	sensor.setTemperatura(30);


	return 0;
}