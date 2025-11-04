#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/MensajeApp.h"
#include "GameProgrammingPatterns/Observer/NotificacionSonido.h"
#include "GameProgrammingPatterns/Observer/NotificacionVibracion.h"
#include "GameProgrammingPatterns/Observer/NotificacionPantalla.h"


int main() {
	// Crear instancia de MensajeApp
	MensajeApp mensajeApp;
	// Crear instancias de observadores
	NotificacionSonido notificacionSonido;
	NotificacionVibracion notificacionVibracion;
	NotificacionPantalla notificacionPantalla;
	// Agregar observadores a MensajeApp
	mensajeApp.agregarNSonido(&notificacionSonido);
	mensajeApp.agregarNVibracion(&notificacionVibracion);
	mensajeApp.agregarNOPantalla(&notificacionPantalla);
	// Simular la recepción de un mensaje
	mensajeApp.recibirMensaje("¡Tienes un nuevo mensaje!");
	// Fin del programa
	return 0;
}