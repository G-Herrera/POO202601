#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Flyweight/Flyweight.h"
#include "GameProgrammingPatterns/Flyweight/ConcreteFlyweight.h"

class 
FlyweightFactory {
public:
	FlyweightFactory()  = default;
	~FlyweightFactory() = default;

	Flyweight* getFlyweight(char symbol) {
		if (m_flyweights.find(symbol) == m_flyweights.end()) {
			m_flyweights[symbol] = new ConcreteFlyweight(symbol);
		}
		return m_flyweights[symbol];
	}

private:
	std::unordered_map<char, Flyweight*> m_flyweights;
};
