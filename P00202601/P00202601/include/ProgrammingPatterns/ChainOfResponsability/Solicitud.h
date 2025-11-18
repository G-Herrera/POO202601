#pragma once
#include "Prerequisites.h"

class Solicitud
{
public:
	Solicitud(int monto) : m_monto(monto) {}
	~Solicitud() = default;

	double getMonto() const{ return m_monto; }

private:
	double m_monto;
};