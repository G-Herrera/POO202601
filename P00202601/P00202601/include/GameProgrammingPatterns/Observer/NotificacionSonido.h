#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/ObserverMessage.h"

class NotificacionSonido : public ObserverMessage {
public:
	NotificacionSonido()  = default;
	~NotificacionSonido() = default;

	void 
	notificarMensaje(const std::string& _message) override {
		std::cout << "Notificacion Sonido: " << _message << std::endl;
	}

private:

};
