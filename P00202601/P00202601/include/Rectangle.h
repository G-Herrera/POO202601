#pragma once
#include "Prerequisites.h"

class
Rectangle
{
public:
	Rectangle(float width, float length) :m_width(width), m_length(length) {};
	~Rectangle()=default;

	void
		setWidth(float width) {
		m_width = width;
	}

	void
		setLength(float length) {
		m_length = length;
	}

	float
	getWidth() const{
		return m_width;
	}

	float
	getLength() const{
		return m_length;
	}

	float
	calculateArea() const {
		return getLength() * getWidth();
	}

	float
	calculatePerimeter() const{
		return (2*getLength())+(2*getWidth());
	}


private:
	float  m_width;
	float m_length;
};

