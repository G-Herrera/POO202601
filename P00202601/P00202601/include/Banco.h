#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBanco.h"

//Esta clase representa un banco que puede crear usuarios y manejar transferencias y 
//compras con cashback.

class 
Banco {
public:
	Banco()=default;
	~Banco()=default;

	//Metodo para crear un nuevo usuario del banco con una cuenta bancaria, 
	//se llama desde usuarioBanco
	UsuarioBanco 
	nuevoUsuario(CuentaBancaria cuenta){
		UsuarioBanco nuevoUsuario(cuenta);
		return nuevoUsuario;
	}

	//Metodo para acceder ala transferencia protegida de la clase CuentaBancaria (base).
	void 
	realizarTransferencia(UsuarioBanco& cuentaOrigen, UsuarioBanco& cuentaDestino,
	double cantidad, int noRef) {
		if (cantidad > 0 && cantidad <= cuentaOrigen.getCuenta().consultarSaldo()) {
			cuentaOrigen.getCuenta().consultarSaldo() -= cantidad;
			cuentaDestino.getCuenta().consultarSaldo() += cantidad;
			std::cout << "Transferencia de " << cantidad << " realizada de " <<
				cuentaOrigen.getCuenta().getNumeroCuenta() << " a " <<
				cuentaDestino.getCuenta().getNumeroCuenta() << " Numero de referencia: " 
				<< noRef << std::endl;
		}
		else {
			std::cout << "Cantidad de transferencia inválida o saldo insuficiente." 
			<< std::endl;
		}
	}

	//Metodo para calcular el cashback segun el comercio
	double 
	cashback(TRADE comercio, double _cantidad) {
		double retorno = 0.0;
		switch (comercio) {
			case TECNOLOGIA:
				retorno = _cantidad * 0.01; //1% de cashback
				break;
			case RESTAURANTES:
				retorno = _cantidad * 0.02; //2% de cashback
				break;
			case FARMACIAS:
				retorno = _cantidad * 0.03; //3% de cashback
				break;
			case SUPERMERCADOS:
				retorno = _cantidad * 0.01; //1% de cashback
				break;
			default:
				retorno = 0.0;
				break;
		}
		return retorno;
	}

	//Metodo para hacer compras con tarjeta y regresar cashBack 1%
	void 
	compraConTarjeta(UsuarioBanco& cuentaOrigen,const std::string& producto, 
	double cantidad, int noRef) {
		if (cantidad > 0 && cantidad <= cuentaOrigen.getCuenta().consultarSaldo()) {
			cuentaOrigen.getCuenta().consultarSaldo() -= cantidad;
			std::cout << "Compra del articulo: " << producto << " Costo: " << cantidad
			<< " Numero de referencia: " << noRef << std::endl;
			//Agregar cashback a la cuenta del usuario
			cuentaOrigen.setCashback(cashback(SUPERMERCADOS, cantidad));
			std::cout << "Ganaste cashback por tu compra: $" << cashback(SUPERMERCADOS, cantidad) <<
			std::endl;
		}
		else {
			std::cout << "Cantidad de compra inválida o saldo insuficiente." << std::endl;
		}
	}



private:

};


