#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Command/Command.h"

// Clase ControlRemoto que actúa como invocador en el patrón Command

class 
ControlRemoto {
public:
	ControlRemoto()  = default;
	~ControlRemoto() = default;

	//Presiona un botón para ejecutar el comando asociado
	void 
	ejecutarComando(Command* comando) {
		comando->ejecutar();
		m_historial.push_back(comando);
	}

	//Deshace el último comando ejecutado
	void 
	deshacerUltimoComando() {
		if (!m_historial.empty()) {
			Command* ultimoComando = m_historial.back();
			ultimoComando->deshacer();
			m_historial.pop_back();
		}
	}

private:
	std::vector<Command*> m_historial;
};
