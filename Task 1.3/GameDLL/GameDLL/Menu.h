#pragma once
#define DllExport __declspec(dllexport)

#include "pch.h"
#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

class DllExport Menu
{
private:
	int fSelector;
	Circle fCircle;
	Square fSquare;
	Triangle fTriangle;
public:
	int getSelector() { return fSelector; };
	int printMenu();
	bool inputValid();
	void outputGenerator(int selector);
};

