#include "Prerequisites.h"


class
	Character {
public: //Esto define si la clase será publica o privada

	Character() = default;
	Character(int health) : m_health(health) {}



	void
		rebirth() {
		if (!isCharacterAlive && m_health <= 0) {
			std::cout << "El pepe a revivido en el Spawn Point" << std::endl;
			isCharacterAlive = true;
		}
	}

	int
		getHealth() const {
		return m_health;
	}

	void
		setHealth(int health) {
		m_health = health;
	}

	void
		getInventory() {
		if (!hasInventory) {
			std::cout << "El pepe no tiene mochila equipada." << std::endl;
		}
		else {
			std::cout << "El pepe tiene una mochila equipada." << std::endl;
		}
	}

	int
		getAvailableSlots() const {
		return m_backpackSlots;
	}

	void
		setBackpackSlots(int backpackSlots) {
		m_backpackSlots = backpackSlots;
		hasInventory = true;
	}

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


private:
	bool isCharacterAlive = false;
	bool hasInventory = false;


protected:
	int m_health;
	int m_backpackSlots;
};

//This is in charge of being the entry point of the app
int main() {
	Character pepe(150);
	pepe.getHealth();
	std::cout << pepe.getHealth() << std::endl;
	pepe.setHealth(-50);
	std::cout << pepe.getHealth() << std::endl;
	if (pepe.getHealth() <= 0) {
		std::cout << "El pepe murió." << std::endl;
		pepe.rebirth();
	}
	pepe.getInventory();
	pepe.setBackpackSlots(3);
	pepe.getInventory();
	std::cout << " Slots disponibles en inventario " << pepe.getAvailableSlots() << std::endl;
	pepe.pickUpObject();
	return 0;
}