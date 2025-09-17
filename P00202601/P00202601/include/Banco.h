#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBanco.h"

class 
Banco {
public:
	Banco()=default;
	~Banco()=default;

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
				cuentaDestino.getCuenta().getNumeroCuenta() << " Numero de referencia: " << noRef << std::endl;
		}
		else {
			std::cout << "Cantidad de transferencia inválida o saldo insuficiente." << std::endl;
		}
	}



private:

};


