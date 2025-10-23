#pragma once

class Cafeteria
{
public:
	Cafeteria()  = default;
	~Cafeteria() = default;

	virtual void 
	prepararCafe() = 0;
};
