#pragma once
#include "Prerequisites.h"

class Item
{
public:
	//Constructor
	Item(const std::string& name, int quantity) : m_name(name), m_quantity(quantity) {}

	//Destructor
	~Item() = default;

	std::string
	getName() const {
		return m_name;
	}

	int
	getQuantity() const {
		return m_quantity;
	}

	void
	add(int quantity) {
		m_quantity += quantity;
	}

	void
	remove(int quantity) {
		if (quantity <= m_quantity) {
			m_quantity -= quantity;
		}
		else {
			std::cout << "No hay suficiente cantidad de " << m_name << "para remover." << std::endl;
		}
		//m_quantity=(m_quantity>quantity)? m_quantity-quantity:0;
	}

private:
	std::string m_name;
	int m_quantity;
};



