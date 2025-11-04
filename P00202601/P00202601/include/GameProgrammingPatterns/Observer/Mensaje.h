#pragma once
// Clase Mensaje que implementa el patrón Observer para notificaciones de mensajes

//Forward declaration
class NotificacionSonido;
class NotificacionVibracion;
class NotificacionPantalla;

class Mensaje
{
public:

	virtual void agregarNSonido(NotificacionSonido* _observer) = 0;
	
	virtual void agregarNVibracion(NotificacionVibracion* _observer) = 0;
	
	virtual void agregarNOPantalla(NotificacionPantalla* _observer) = 0;

	virtual void notificarObservadores() = 0;

};
