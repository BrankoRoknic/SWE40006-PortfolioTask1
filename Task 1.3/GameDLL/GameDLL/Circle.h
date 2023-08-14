#pragma once
#define DllExport __declspec(dllexport)

class DllExport Circle
{
private:
	const float PI = 3.14159f;
public:
	float CalculateArea(float radius);
	void printArea(float area);
};

