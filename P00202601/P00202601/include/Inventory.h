#pragma once
#include "Prerequisites.h"
#include "Item.h"

class 
Inventory {
public:
	Inventory()=default;
	~Inventory()=default;

	void 
	addItem( const std::string& name, int quantity) {
		//Search if the item already exists in the inventory
		//se busca si el item ya existe en el inventario
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.add(quantity);
				return;
			}
		}
		//If the item does not exist, add a new item to the inventory
		//si no existe el item, se agrega un nuevo item al inventario
		m_items.emplace_back(name, quantity);
	}

	void
	showInventory()const {
		if (m_items.empty()) {
			std::cout << "El inventario esta vacío." << std::endl;
			return;
		}

		std::cout << "Inventario:" << std::endl;
		for (const auto& item : m_items) {
			std::cout << "- " << item.getName() << ": " << item.getQuantity() << std::endl;
		}
	}

	void 
	useItem(const std::string& name, int quantity) {
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.remove(quantity);
				if (item.getQuantity() == 0) {
					//m_items.erase(std::remove(m_items.begin(), m_items.end(), item), m_items.end());
				}
				std::cout << "Usaste " << quantity << " de " << name << "(s)." << std::endl;
			}
		}
		std::cout << "No tienes " << name << " en el inventario." << std::endl;
	}
private:
	std::vector<Item> m_items;	
};
