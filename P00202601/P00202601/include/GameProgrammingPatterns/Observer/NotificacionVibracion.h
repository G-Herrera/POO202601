#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/ObserverMessage.h"

class NotificacionVibracion : public ObserverMessage {
public:
	NotificacionVibracion() = default;
	~NotificacionVibracion() = default;

	void
		notificarMensaje(const std::string& _message) override {
		std::cout << "Notificacion de Vibracion: " << _message << std::endl;
	}

private:

};