#pragma once
#include "GameProgrammingPatterns/Command/Command.h"
#include "GameProgrammingPatterns/Command/Luz.h"

// Comando concreto para encender una luz
class
ComandoApagar : public Command {
public:
	ComandoApagar(Luz& _luz) : m_luz(_luz) {}
	~ComandoApagar() = default;

	void
	ejecutar() override {
		m_luz.apagar();
	}

	void
	deshacer() override {
		m_luz.encender();
	}

private:
	Luz& m_luz;
};