#pragma once
#include "Prerequisites.h"

class 
Circle {
public:
  Circle(float radius) : radius(radius) {};
  float getArea() const {
    return 3.14159f * radius * radius;
  };
  float getPerimeter() const {
    return 2 * 3.14159f * radius;
};

private:
    float radius;
};
