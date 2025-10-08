#pragma once
#include "Prerequisites.h"

//Vehiculo abstracto
class 
Vehiculo {
public:
	virtual void descripcion() const {
		std::cout << "Soy un vehiculo" << std::endl;
	};
	virtual ~Vehiculo() = default;
};

//Vehiculo concreto Coche
class 
Coche : public Vehiculo {
public:
	void descripcion() const override {
		std::cout << "Soy un coche" << std::endl;
	}
};

//Vehiculo concreto Bicicleta
class 
Bicicleta : public Vehiculo {
public:
	void descripcion() const override {
		std::cout << "Soy una bicicleta" << std::endl;
	}
};

//Clase base para la fabrica
class 
FactoriaVehiculos {
public:
	virtual Vehiculo* crearVehiculo() const = 0;
	virtual ~FactoriaVehiculos() = default;
};

//Factoria concreta Coche
class 
FactoriaCoches : public FactoriaVehiculos {
public:
	Vehiculo* crearVehiculo() const override {
		return new Coche();
	}
};

//Factoria concreta Bicicleta
class 
FactoriaBicicletas : public FactoriaVehiculos {
public:
	Vehiculo* crearVehiculo() const override {
		return new Bicicleta();
	}
};





