// lab1.cpp: определяет точку входа для консольного приложения.
//

//---------------------------------------------------------
// Приложение для вычисления линейного арифметического выражения
// по формуле 1/x+sin(x2)*(cos(y)+y/2) при заданных аргументах x и у
// Автор: студент Смоляков И.В., группа КН 17-1, вариант 16
//---------------------------------------------------------

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <math.h>
#include <cmath>
#include <conio.h> 

int main(int argc, const char * argv[])
{
	using namespace std;
	double Pi, x, y, z, r1, r2, ra1, ra2;

	Pi = 3.14159265358979323846; // число пи

	cout << "1/x + sin(x^2) * (cos(y) + y/2) = ?" << endl; //вывод выполняемой формулы
	cout << endl;
	cout <<  endl;

	cout << "Enter degree x: "; //ввод x
	cin >> x;
	cout <<  endl;

	if (x > 0 || x < 0) //правильный ввод
	{

		cout << "Enter degree y: "; //ввод y
		cin >> y;
		cout << endl;
		cout << endl;
		cout << endl;

		r1 = x * Pi / 180; //перевод градусов в радианы
		r2 = y * Pi / 180;

		ra1 = pow(r1, 2); // расчеты для выражения
		ra2 = cos(r2);

		cout << "Degree x to radian: "; //градусы x переведенные в радианы
		cout << r1 << endl;
		cout << endl;

		cout << "Degree y to radian: "; //градусы y переведенные в радианы
		cout << r2 << endl;
		cout << endl;
		cout << endl;
		cout << endl;

		z = 1 / r1 + sin(ra1) * (ra2 + r2 / 2); //применение выражения

		cout << fixed << setprecision(5) << "Result : " << z << endl; //вывод результата
		cout << endl;

		_getch(); // пауза
	}

	else //не правильный ввод
	{
		cout << "Error: x cant be 0. Restart program.";
		cout << endl;

		_getch(); // пауза
	}

	return 0;
}