#pragma once
#include "Prerequisites.h"

class 
Prototype {
public:
	Prototype()  = default;
	~Prototype() = default;

	virtual Prototype* 
	clone() const = 0;
	
	virtual void 
	config(std::string _value) const = 0;
	
	virtual void 
	info() const = 0;

};

