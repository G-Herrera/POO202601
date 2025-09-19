#pragma once
#include "Prerequisites.h"

//Clase base que representa una cuenta bancaria con funcionalidades para consultar saldo, 
//realizar transferencias y calcular intereses.

class 
CuentaBancaria {
public:
	//Constructores
	CuentaBancaria() = default;
	CuentaBancaria(std::string titular, int numeroCuenta, double saldoInicial) : 
	m_titular(titular), m_numeroCuenta(numeroCuenta), m_saldo(saldoInicial) {};
	~CuentaBancaria()=default;
	std::string m_titular;

	//Metodo para consultar el saldo de la cuenta
	double& 
	consultarSaldo(){
		std::cout << "El saldo de la cuenta es: " << m_saldo << std::endl;
		return m_saldo;
	};

	//Metodo para mostrar el interes calculado sobre el saldo actual
	void
		mostrarInteresCalculado() {
		double tasaInteres = 5.0; //Tasa de interes del 5%
		double interes = calcularIntereses(tasaInteres);
		std::cout << "Interes calculado al " << tasaInteres << "% sobre el saldo de " <<
			m_saldo << " es: " << interes << std::endl;
	};

	//Metodo para obtener el numero de cuenta
	int
	getNumeroCuenta() const {
		return m_numeroCuenta;
	}

protected:
	int m_numeroCuenta;

	/*void
	depositar(double cantidad) {
		if (cantidad > 0) {
			m_saldo += cantidad;
			std::cout << "Depósito de " << cantidad << " realizado. Nuevo saldo: " << m_saldo 
			<< std::endl;
		}
		else {
			std::cout << "Cantidad de depósito inválida." << std::endl;
		}
	};

	void 
	retirar(double cantidad) {
		if (cantidad > 0 && cantidad <= m_saldo) {
			m_saldo -= cantidad;
			std::cout << "Retiro de " << cantidad << " realizado. Nuevo saldo: " << m_saldo 
			<< std::endl;
		}
		else {
			std::cout << "Cantidad de retiro inválida o saldo insuficiente." << std::endl;
		}
	};*/

	//Metodo para realizar transferencias entre cuentas
	void 
	transferir(CuentaBancaria& cuentaOrigen, CuentaBancaria& cuentaDestino, 
	double cantidad, int noRef) {
		if (cantidad > 0 && cantidad <= cuentaOrigen.m_saldo) {
			cuentaOrigen.m_saldo -= cantidad;
			cuentaDestino.m_saldo += cantidad;
			std::cout << "Transferencia de " << cantidad << " de la cuenta " << 
			cuentaOrigen.m_numeroCuenta << " realizada a la cuenta "
			<< cuentaDestino.m_numeroCuenta << " con exito. Numero de referencia " << 
			noRef << std::endl;
		}
		else {
			std::cout << "Cantidad de transferencia inválida o saldo insuficiente." 
			<< std::endl;
		}
	};

private:
	double m_saldo;

	//Metodo para calcular los intereses sobre el saldo actual
	double 
	calcularIntereses(double tasaInteres) {
		return (m_saldo * tasaInteres) / 100;
	};
};

