#pragma once

//Implementacion del patrón Flyweight usado para minimizar el uso de memoria al compartir tantos datos como sea posible con objetos similares.
//Esta es una clase abstracta que define la interfaz para los objetos Flyweight.

class 
Flyweight {
public:
	Flyweight()  = default;
	~Flyweight() = default;

	virtual void Draw(int x, int y) = 0;

private:

};
