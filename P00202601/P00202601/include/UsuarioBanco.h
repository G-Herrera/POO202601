#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class 
UsuarioBanco {
public:
	UsuarioBanco(CuentaBancaria cuenta) {
		m_cuenta = cuenta;
		m_nombreUsuario = m_cuenta.m_titular;
		m_antiguedadCuenta.getFecha();
		m_cashBack = m_cuenta.consultarSaldo() * 0.01; //1% de cashBack inicial
		m_uniquePoints = 5;
	};
	~UsuarioBanco()=default;

	CuentaBancaria&
	getCuenta() {
		return m_cuenta;
	}

private:
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	std::vector<int> m_historialTransacciones;
	Fecha m_antiguedadCuenta;
	int m_cashBack; //1% 3% 5%
	int m_uniquePoints;
};
