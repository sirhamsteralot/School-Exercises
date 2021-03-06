// Exercise 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Point.h"
#include <iostream>
#include <vector>


int main()
{
	//First point test
	Point firstPoint(1,2, "firstPoint");
	firstPoint.Print();

	//Second point test, swap x&y
	Point secondPoint(1, 2, "secondPoint");
	double oldY = secondPoint.GetY();
	double oldX = secondPoint.GetX();

	secondPoint.SetX(oldY);
	secondPoint.SetY(oldX);
	secondPoint.SetName("secondPointSwapped");
	secondPoint.Print();

	//Third point test
	Point thirdPoint(1, 2, "Start");
	double distance = thirdPoint.Distance(secondPoint);
	std::cout << "Distance: " << distance << std::endl;

	Point pointArray[4] = {
		{1, 2, "one"},
		{2, 3, "two"},
		{3, 4, "three"},
		{4, 5, "four"},
	};

	double distanceArray[6];
	std::vector<double> tempVec;
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i < j) {
				tempVec.push_back (pointArray[i].Distance(pointArray[j]));
			}
		}
	}

	for (int i = 0; i < 6; i++) {
		distanceArray[i] = tempVec[i];

		std::cout << "distance[" << i << "]: " << distanceArray[i] << std::endl;
	}
}

