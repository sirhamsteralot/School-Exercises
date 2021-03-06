// Exercise 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <array>


int main()
{
	std::array<int, 10> a = {0,1,2,3,4,5,6,7,8,9};
	double average = 0;
	int highestValue = 0;

	for (int i = 0; i < a.size(); i++) {
		std::cout << "value[" << i << "]: " << a[i] << std::endl;

		average += a[i];

		if (a[i] > highestValue)
			highestValue = a[i];
	}

	average /= a.size();

	std::cout << std::endl << "average: " << average << std::endl;
	std::cout << "highest value: " << highestValue << std::endl << std::endl;

	std::array<int, 10> b = a;
	for (int i = 0; i < b.size(); i++) {
		std::cout << "value[" << i << "]: " << b[i] << std::endl;
	}

    return 0;
}

