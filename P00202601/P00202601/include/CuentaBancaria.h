#pragma once
#include "Prerequisites.h"

class 
CuentaBancaria {
public:
	CuentaBancaria(const std::string& titular, int numeroCuenta) : m_titular(titular), 
	m_numeroCuenta(numeroCuenta), m_saldo(0.0) {};
	~CuentaBancaria()=default;
	std::string m_titular;

	void 
	consultarSaldo() const {
		std::cout << "El saldo de la cuenta es: " << m_saldo << std::endl;
	};

	void 
	depositarFondos(double cantidad) {
		depositar(cantidad);
	};

	void 
	retirarFondos(double cantidad) {
		retirar(cantidad);
	};

	void 
	transferirFondos(CuentaBancaria& cuentaDestino, double cantidad) {
		transferir(cuentaDestino, cantidad);
	};

	void 
	aplicarIntereses() {
		calcularIntereses();
	};

protected:
	int m_numeroCuenta;

	void 
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
	};

	void 
	transferir(CuentaBancaria& cuentaDestino, double cantidad) {
		if (cantidad > 0 && cantidad <= m_saldo) {
			m_saldo -= cantidad;
			cuentaDestino.m_saldo += cantidad;
			std::cout << "Transferencia de " << cantidad << " realizada a la cuenta " 
			<< cuentaDestino.m_numeroCuenta << ". Nuevo saldo: " << m_saldo << std::endl;
		}
		else {
			std::cout << "Cantidad de transferencia inválida o saldo insuficiente." 
			<< std::endl;
		}
	};

private:
	double m_saldo;

	void 
	calcularIntereses() {
		double interes = m_saldo * 0.05; // Suponiendo un interés del 5%
		m_saldo += interes;
		std::cout << "Intereses de " << interes << " calculados. Nuevo saldo: " 
		<< m_saldo << std::endl;
	};
};

