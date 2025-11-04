#pragma once
#include "Prerequisites.h"

class 
ObserverMessage {
public:

	virtual void notificarMensaje(const std::string& _message) = 0;	

};