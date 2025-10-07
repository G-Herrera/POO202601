#pragma once
#include "Prerequisites.h"

// Implementacion del patron Singleton en C++

class 
MiSingleton{
private:
	//Metodo estatico que devuelve la unica instancia de la clase
	MiSingleton() :	data(0) {};
	~MiSingleton();

public:
	static MiSingleton* 
	getInstancia() {
		if (instancia == nullptr) {
			instancia = new MiSingleton();
		}
		return instancia;
	}

	int 
	getData() const {
		return data;
	}

	void 
	setData(int valor) {
		data = valor;
	}

private:
	//Puntero estatico a la unica instancia de la clase. Recordar que debe ser estatico 
	//para que exista una unica copia compartida por todas las instancias. Es decir solo
	//puede existir una instancia
	static MiSingleton* instancia;
	int data;
};

