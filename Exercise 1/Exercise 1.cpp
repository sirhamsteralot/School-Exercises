// Exercise 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>


int main()
{
	std::ofstream myfile;
	myfile.open("values.txt");

	for (int i = 0; i < 4; i++) {

		double floatingPoint = 0;
		while (floatingPoint <= 3 || floatingPoint >= 5) {
			std::cout << "Please input a fraction between 3 and 5" << std::endl;

			std::cin >> floatingPoint;
		}

		std::cout << "sqrt of number: " << sqrt(floatingPoint) << std::endl;
		myfile << sqrt(floatingPoint) << std::endl;
	}

	myfile.close();
}

