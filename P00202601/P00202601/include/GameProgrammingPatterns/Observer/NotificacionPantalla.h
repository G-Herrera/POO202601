#pragma once
#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/ObserverMessage.h"

class NotificacionPantalla : public ObserverMessage {
public:
	NotificacionPantalla() = default;
	~NotificacionPantalla() = default;

	void
		notificarMensaje(const std::string& _message) override {
		std::cout << "Notificacion en Pantalla: " << _message << std::endl;
	}

private:

};