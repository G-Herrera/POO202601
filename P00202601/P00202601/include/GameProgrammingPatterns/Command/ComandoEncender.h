#pragma once
#include "GameProgrammingPatterns/Command/Command.h"
#include "GameProgrammingPatterns/Command/Luz.h"

// Comando concreto para encender una luz
class 
ComandoEncender : public Command {
public:
	ComandoEncender(Luz& _luz) : m_luz(_luz) {}
	~ComandoEncender() = default;

	void 
	ejecutar() override {
		m_luz.encender();
	}

	void 
	deshacer() override {
		m_luz.apagar();
	}

private:
	Luz& m_luz;
};
