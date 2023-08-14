#include "Square.h"
#include <iostream>

float Square::CalculateArea(float base, float height)
{
	return base * height;
}

void Square::PrintArea(float area)
{
	std::cout << "The area of the square is " << area << std::endl;
}
