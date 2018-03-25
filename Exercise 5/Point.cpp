#include "stdafx.h"
#include "Point.h"
#include <iostream>
#include <math.h>


Point::Point()
{
	this->X = 0.0;
	this->Y = 0.0;
}

Point::Point(const double _x, const double _y, std::string _name)
{
	this->X = _x;
	this->Y = _y;
	this->Name = _name;
}

void Point::Print() {
	std::cout << "[" << this->X << ", " << this->Y << ", " << this->Name << std::endl;
}

double Point::GetX() {
	return this->X;
}

double Point::GetY() {
	return this->Y;
}

std::string Point::GetName() {
	return this->Name;
}

void Point::SetX(const double _x) {
	this->X = _x;
}

void Point::SetY(const double _y) {
	this->Y = _y;
}

void Point::SetName(std::string _name) {
	this->Name = _name;
}

double Point::Distance(const Point secondPoint) {
	double distX = abs(secondPoint.X - this->X);
	double distY = abs(secondPoint.Y - this->Y);

	return sqrt((distX * distX) + (distY * distY));
}

Point::~Point()
{

}
