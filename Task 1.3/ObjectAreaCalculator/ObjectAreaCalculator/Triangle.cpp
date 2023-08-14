#include "Triangle.h"
#include <iostream>

float Triangle::CalculateArea(float base, float height)
{
	return 0.5f * base * height;
}

void Triangle::PrintArea(float area)
{
	std::cout << "The area of the triangle is " << area << std::endl;
}

