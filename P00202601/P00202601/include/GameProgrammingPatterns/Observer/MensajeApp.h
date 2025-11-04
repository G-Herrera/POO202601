#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Mensaje.h"
#include "GameProgrammingPatterns/Observer/ObserverMessage.h"

class 
MensajeApp : public Mensaje {
public:
	MensajeApp()  = default;
	~MensajeApp() = default;

	void recibirMensaje(const std::string& _message) {
		m_message = _message;
		notificarObservadores();
	}



	void notificarObservadores() override {
		for (auto& observer : m_observers) {
			observer->notificarMensaje(m_message);
		}
	}

	void 
	agregarNSonido(NotificacionSonido* _observer) override {
		m_notificacionSonido.push_back(_observer);
	}
	void 
	agregarNVibracion(NotificacionVibracion* _observer) override {
		m_notificacionVibracion.push_back(_observer);
	}
	void 
	agregarNOPantalla(NotificacionPantalla* _observer) override {
		m_notificacionPantalla.push_back(_observer);
	}

private:
	std::vector<ObserverMessage*> m_observers;
	std::vector<NotificacionSonido*> m_notificacionSonido;
	std::vector<NotificacionVibracion*> m_notificacionVibracion;
	std::vector<NotificacionPantalla*> m_notificacionPantalla;
	std::string m_message;
};
