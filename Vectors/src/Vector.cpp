#include "Vector.h"

#include <iostream>

Vector::Vector(float x, float y)
{
	_x = x;
	_y = y;
}

void Vector::ToString()
{
	std::cout << "x:" << _x << ":" << "y:" << _y << "\n";
}