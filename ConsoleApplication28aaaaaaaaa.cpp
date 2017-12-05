// ConsoleApplication28aaaaaaaaa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

double function(double x) {
	double result = 3 * x - 1;
	return result;
}
double function2(double x) {
	double result = exp(-x / 3) + x / (x + 1);
	return result;

}
int main()
{
	std::cout << "for or while?" << std::endl;
	std::string z;
	std::cin >> z;
	if (z == "for") {
		for (double i = 3; i <= 5; i += 0.5) {
			std::cout << i << std::endl;
			std::cout << function(i) + function2(i) << std::endl;

		}

	}
	else if (z == "while") {
		double i = 3;
		while (i <= 5.0) {
			std::cout << i << std::endl;
			std::cout << function(i) + function2(i) << std::endl;
			i += 0.5;

		}

	}
	else {
		std::cout << "unknown error";
	}
	system("pause");
	return 0;