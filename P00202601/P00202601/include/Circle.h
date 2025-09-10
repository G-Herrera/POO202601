#pragma once
#include "Prerequisites.h"

class 
Circle {
public:
  Circle(float radius) : m_radius(radius) {};
	~Circle() = default;

  float 
  getArea() const {
    return m_pi * m_radius * m_radius;
  };

  float 
  getPerimeter() const {
    return 2 * m_pi * m_radius;
  };

private:
    float m_radius;
		float m_pi = 3.14159f;
};
