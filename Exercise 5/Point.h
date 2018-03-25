#pragma once
#include "stdafx.h"
#include <string>

class Point
{
public:
	Point();
	Point(const double, const double, std::string);
	~Point();

	void Print();
	double Distance(Point);

	double GetX();
	double GetY();
	std::string GetName();

	void SetX(double);
	void SetY(double);
	void SetName(std::string);
	
private:
	double X;
	double Y;
	std::string Name;
};

