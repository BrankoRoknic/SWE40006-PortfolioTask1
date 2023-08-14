#pragma once
#define DllExport __declspec(dllexport)

class DllExport Square
{
public:
	float CalculateArea(float base, float height);
	void PrintArea(float area);
};

