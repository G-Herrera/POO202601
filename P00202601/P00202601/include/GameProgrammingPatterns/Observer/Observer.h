#pragma once
// Observer Pattern Implementation es una clase meramente virtual/interfaz

class 
Observer {
public:
	Observer()  = default;
	~Observer() = default;

	virtual void 
	notificar(int _value) = 0;
};

