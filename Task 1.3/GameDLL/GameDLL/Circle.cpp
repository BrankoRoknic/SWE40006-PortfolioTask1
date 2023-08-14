#include "pch.h"
#include "Circle.h"
#include <iostream>

float Circle::CalculateArea(float radius)
{
	return PI * radius * radius;
}

void Circle::printArea(float area)
{
	std::cout << "The area of the circle is " << area << std::endl;
}
