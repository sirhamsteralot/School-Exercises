// Exercise 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

void showThruthTable();
bool logicFunction(bool b1, bool b2, bool b3);
void inputLogicValues(bool &b1, bool &b2, bool &b3);

int main()
{
	showThruthTable();
	return 0;
}

void showThruthTable() {
	std::cout << "NoBoolAlpha" << std::endl;
	std::cout << std::boolalpha << false << " " << false << " " << false << " | " << logicFunction(false, false, false) << std::endl;
	std::cout << std::boolalpha << true << " " << false << " " << false << " | " << logicFunction(true, false, false) << std::endl;
	std::cout << std::boolalpha << false << " " << true << " " << false << " | " << logicFunction(true, true, false) << std::endl;
	std::cout << std::boolalpha << true << " " << true << " " << false << " | " << logicFunction(false, true, false) << std::endl;
	std::cout << std::boolalpha << false << " " << false << " " << true << " | " << logicFunction(true, false, true) << std::endl;
	std::cout << std::boolalpha << true << " " << false << " " << true << " | " << logicFunction(false, false, true) << std::endl;
	std::cout << std::boolalpha << false << " " << true << " " << true << " | " << logicFunction(true, true, true) << std::endl;
	std::cout << std::boolalpha << true << " " << true << " " << true << " | " << logicFunction(false, true, true) << std::endl;

	std::cout << std::endl << std::endl << "BoolAlpha" << std::endl;
	std::cout << std::noboolalpha << false << " " << false << " " << false << " | " << logicFunction(false, false, false) << std::endl;
	std::cout << std::noboolalpha << true << " " << false << " " << false << " | " << logicFunction(true, false, false) << std::endl;
	std::cout << std::noboolalpha << false << " " << true << " " << false << " | " << logicFunction(true, true, false) << std::endl;
	std::cout << std::noboolalpha << true << " " << true << " " << false << " | " << logicFunction(false, true, false) << std::endl;
	std::cout << std::noboolalpha << false << " " << false << " " << true << " | " << logicFunction(true, false, true) << std::endl;
	std::cout << std::noboolalpha << true << " " << false << " " << true << " | " << logicFunction(false, false, true) << std::endl;
	std::cout << std::noboolalpha << false << " " << true << " " << true << " | " << logicFunction(true, true, true) << std::endl;
	std::cout << std::noboolalpha << true << " " << true << " " << true << " | " << logicFunction(false, true, true) << std::endl;


	std::cout << std::endl << std::endl << "Please input file name:" << std::endl;
	std::string fileName;
	std::cin >> fileName;

	std::ifstream myfile(fileName);
	bool a, b, c;

	myfile >> a >> b >> c;

	std::cout << a << " " << b << " " << c << " | " << logicFunction(a, b, c) << std::endl;

	int aFewTimes = 3;
	for (int i = 0; i < aFewTimes; i++) {
		inputLogicValues(a, b, c);
		std::cout << a << " " << b << " " << c << " | " << logicFunction(a, b, c) << std::endl;
	}

}

bool logicFunction(bool b1, bool b2, bool b3) {
	bool output = (b1  &&  b2) || !b3;

	return output;
}

void inputLogicValues(bool &b1, bool &b2, bool &b3) {
	std::cout << "Please input three boolean values" << std::endl;

	std::cin >> b1 >> b2 >> b3;
}

