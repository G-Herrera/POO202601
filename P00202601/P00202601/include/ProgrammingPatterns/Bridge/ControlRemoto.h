#pragma once
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class ControlRemoto {
public:
	ControlRemoto(Dispositivo* dispositivo) : dispositivo_(dispositivo) {}
	~ControlRemoto() = default;

	void
	encenderDispositivo() {
		dispositivo_->encender();
	}

	void 
	apagarDispositivo() {
		dispositivo_->apagar();
	}

private:
	Dispositivo* dispositivo_;
};
