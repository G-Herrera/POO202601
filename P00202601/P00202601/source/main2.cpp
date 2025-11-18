#include "Prerequisites.h"
#include "GameProgrammingPatterns/Command/ControlRemoto.h"
#include "GameProgrammingPatterns/Command/ComandoEncender.h"
#include "GameProgrammingPatterns/Command/ComandoApagar.h"
#include "GameProgrammingPatterns/Command/Luz.h"




int main() {
	// Crear el receptor
	Luz miLuz;
	// Crear los comandos, como parametro se le pasa la referencia al receptor
	ComandoEncender comandoEncender(miLuz);
	ComandoApagar comandoApagar(miLuz);

	// Crear el invocador
	ControlRemoto controlRemoto;
	// Ejecutar comandos a traves del invocador
	controlRemoto.ejecutarComando(&comandoEncender); // Enciende la luz, se utiliza & para pasar la direccion del comando
	controlRemoto.ejecutarComando(&comandoApagar);  // Apaga la luz
	// Deshacer el ultimo comando (apagar la luz)
	controlRemoto.deshacerUltimoComando();          // Vuelve a encender la luz


	return 0;
}