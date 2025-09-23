#pragma once

//STD Library includes
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
/*
//mi estructura
struct
Date {
	int dd;
	int mm;
	int yy;
};
*/


//Logica clase con copilot
struct 
Fecha {
	int dia;
	int mes;
	int anio;

	void 
	getFecha(){
		time_t t = time(0);   // get time now
		tm* now = localtime(&t);

		dia = now->tm_mday;
		mes = now->tm_mon + 1; //tm_mon is 0-11
		anio = now->tm_year + 1900; //tm_year is years since 1900

		std::cout << "Fecha actual: " << toString() << std::endl;
	}

	std::string 
	toString() const {
		return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
	}
};

//Enum de comercios utilizado en la clase Banco para poder calcular el cashback 
//segun el comercio
enum
TRADE {
	TECNOLOGIA = 1,
	RESTAURANTES = 2,
	FARMACIAS = 3,
	SUPERMERCADOS = 4
};

//Enum de categorias de productos utilizado en la clase Producto
enum
CATEGORIAPRODUCTO {
	ALIMENTOS = 1,
	ELECTRODOMESTICOS = 2,
	ROPA = 3,
	MISCELANEOS = 4
};
