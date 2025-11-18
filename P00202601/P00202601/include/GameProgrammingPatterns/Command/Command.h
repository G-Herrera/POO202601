#pragma once

//Command Pattern clase meramente virtual que sirve de interfaz para los comandos concretos


class 
Command {
public:
	Command()  = default;
	~Command() = default;

	virtual void ejecutar() = 0;
	virtual void deshacer() = 0;

};
