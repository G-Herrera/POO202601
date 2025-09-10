#include "Prerequisites.h"
#include "Inventory.h"
#include "Rectangle.h"
#include "Circle.h"

                                                                                         
class
Character {
public: //Esto define si la clase será publica o privada

	Character() = default;
	Character(int health) : m_health(health) {}


	//This function respawns Pepe.
	void
		rebirth() {
		if (!isCharacterAlive && m_health <= 0) {
			std::cout << "El pepe a revivido en el Spawn Point" << std::endl;
			isCharacterAlive = true;
		}
	}

	//This function allows us know the status of Pepe´s health.
	int
		getHealth() const {
		return m_health;
	}
	
	//This function changes Pepe’s health.
	void
		setHealth(int health) {
		m_health = health;
	}
	//Parte de la tarea de palabras reservadas (EQUIVOCADO)
	/*
	//This function checks if Pepe has a backpack equipped.
	void
		getInventory() {
		if (!hasInventory) {
			std::cout << "El pepe no tiene mochila equipada." << std::endl;
		}
		else {
			std::cout << "El pepe tiene una mochila equipada." << std::endl;
		}
	}

	//With this function, we can find out how many slots Pepe has available.
	int
		getAvailableSlots() const {
		return m_backpackSlots;
	}

	//This function assigns a backpack (inventory) to Pepe.
	void
		setBackpackSlots(int backpackSlots) {
		m_backpackSlots = backpackSlots;
		hasInventory = true;
	}

	//This function allows to Pepe collect objects
	void
	pickUpObject() {
		int yes_no;
		while (hasInventory) {
			std::cout << "¿Deseas recoger este objeto (1 - Si 2 - No)" << std::endl;
			std::cin >> yes_no;
			switch (yes_no)
			{
			case 1:
				std::cout << "El pepe ha recogido un objeto del suelo" << std::endl;
				setBackpackSlots(getAvailableSlots() - 1);
				std::cout << " Slots disponibles en inventario " << getAvailableSlots() << std::endl;
				break;
			case 2:
				std::cout << "El pepe NO ha recogido un objeto del suelo" << std::endl;
				break;
			default:
				std::cout << "OPCION INVALIDA INTENTA DE NUEVO CON 1(SI) O 2(NO)." << std::endl;
				break;
			}

			if (getAvailableSlots() == 0) {
				std::cout << " INVENTARIO LLENO! " << std::endl;
				hasInventory = false;
			}
		}
	}
	*/


private:
	bool isCharacterAlive = false;
	//Parte de la tarea de palabras reservadas (EQUIVOCADO)
	//bool hasInventory = false;


protected:
	int m_health;
	//Parte de la tarea de palabras reservadas (EQUIVOCADO)
	//int m_backpackSlots;
};

//This is in charge of being the entry point of the app
int main() {
	//Clase 1 creando primera clase (personaje)
	/*
	Character pepe(150);
	pepe.getHealth();
	std::cout << pepe.getHealth() << std::endl;
	pepe.setHealth(-50);
	std::cout << pepe.getHealth() << std::endl;
	if (pepe.getHealth() <= 0) {
		std::cout << "El pepe murió." << std::endl;
		pepe.rebirth();
	}
	*/

	//Parte de la tarea palabras reservada (EQUIVOCADO)
	/*
	pepe.getInventory();
	pepe.setBackpackSlots(3);
	pepe.getInventory();
	std::cout << " Slots disponibles en inventario " << pepe.getAvailableSlots() << std::endl;
	pepe.pickUpObject();
	*/

	Inventory inventory;
	inventory.addItem("Hierro crudo", 7);
	inventory.addItem("Carne de rata", 4);
	inventory.addItem("Pocion de fuerza", 3);

	inventory.useItem("Pocion de fuerza", 1);
	inventory.showInventory();

	Rectangle rectangle1(0, 0);
	rectangle1.setLength(5);
	rectangle1.setWidth(3);
	std::cout << "The area is:" << rectangle1.calculateArea() << std::endl;
	std::cout << "The perimeter is:" << rectangle1.calculatePerimeter() << std::endl;
	
	/*
	//Ejercicio con mi logica
	Date fecha;
	std::cout << "Ingresa el dia:" <<	std::endl;
	std::cin >> fecha.dd;
	std::cout << "Ingresa el mes:" << std::endl;
	std::cin >> fecha.mm;
	std::cout << "Ingresa el año:" << std::endl;
	std::cin >> fecha.yy;

	std::cout << "Dia: " <<fecha.dd<< " Mes: " << fecha.mm << " Anio: " << fecha.yy << std::endl;
	*/

	//Ejercicio con la logica de clase
	Fecha fecha;
	fecha.getFecha();

	Circle miCirculo(4.8);
	std::cout << "El area del circulo es: " << miCirculo.getArea() << std::endl;
	std::cout << "El perimetro del circulo es: " << miCirculo.getPerimeter() << std::endl;

	//std::cin.get();
	return 0;
}