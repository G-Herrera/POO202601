#pragma once
//Esta es la clase notificadora o sujeto
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Observer/Observer.h"

class 
SensorTemperatura {
public:
	SensorTemperatura() = default;
	~SensorTemperatura() = default;

	void
		addObserver(Observer* _observer) {
		m_observers.push_back(_observer);
	}

	void
	setTemperatura(int _temperatura) {
		m_temperatura = _temperatura;
		//Notificamos a los observadores
		notificarObservadores();
	}

	void
	notificarObservadores() {
		for (auto& observer : m_observers) {
			observer->notificar(m_temperatura);
		}
	}
private:
	std::vector<Observer*> m_observers;
	int m_temperatura;
};
