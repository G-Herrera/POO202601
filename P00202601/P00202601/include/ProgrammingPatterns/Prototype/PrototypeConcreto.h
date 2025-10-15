#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Prototype/Prototype.h"

class PrototypeConcreto : public Prototype {
public:
	PrototypeConcreto()  = default;
	~PrototypeConcreto() = default;

	Prototype* 
	clone() const override {
		PrototypeConcreto* copy = new PrototypeConcreto();
		copy->config(value);
		return copy;
	}
	void 
	config(std::string _value) const override {
		const_cast<std::string&>(value) = _value;
	}
	void 
	info() const override {
		std::cout << "PrototypeConcreto with value: " << value << std::endl;
	}

private:
	std::string value;
};