// lab2.cpp: определяет точку входа для консольного приложения.
//

//---------------------------------------------------------
// Приложение "Торговый автомат” для заказа напитка из предложенного списка.
// Автор: студент Смоляков И.В., группа КН 17-1, вариант 16
//---------------------------------------------------------

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include<string>

int main(int argc, const char * argv[])
{
	std::string op;
	std::string res;

	do
	{

		std::cout << "Vending machine" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "Choice of conditional statement";
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "Select the conditional statement switch or if: ";
		std::cin >> op;
		std::cout << std::endl;

		int drink, sugar, yourdrink;
		const int drink1 = 1;
		const int drink2 = 2;
		const int drink3 = 3;
		const int drink4 = 4;
		const int drink5 = 5;

		if (op == "switch")//программа на switch
		{
			std::cout << "You choose statement 'switch-case'" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Enter the code of the drink you want:" << std::endl;
			std::cout << std::endl;
			std::cout << "1 - Coffee americano" << std::endl;
			std::cout << "2 - Coffee latte" << std::endl;
			std::cout << "3 - Coffee expresso" << std::endl;
			std::cout << "4 - Tea black" << std::endl;
			std::cout << "5 - Tea green" << std::endl;
			std::cout << std::endl;

			std::cout << "Code: ";
			std::cin >> drink;
			std::cout << std::endl;
			std::cout << std::endl;

			switch (drink)
			{
			case 1:
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 9;
				break;

			case 2:
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 18;
				break;

			case 3:
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 27;
				break;

			case 4:
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 36;
				break;

			case 5:
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 45;
				break;

			default:
				std::cout << "Error, you did not order. Restart program" << std::endl;
				_getch();
				break;
			}

			yourdrink = drink + sugar;

			switch (yourdrink)
			{

			case 10:
				std::cout << "Your order: Coffee americano sugar-free" << std::endl;
				break;

			case 11:
				std::cout << "Your order: Coffee americano with sugar" << std::endl;
				break;

			case 20:
				std::cout << "Your order: Coffee latte sugar-free" << std::endl;
				break;

			case 21:
				std::cout << "Your order: Coffee latte with sugar" << std::endl;
				break;

			case 30:
				std::cout << "Your order: Coffee expresso sugar-free" << std::endl;
				break;

			case 31:
				std::cout << "Your order: Coffee expresso with sugar" << std::endl;
				break;

			case 40:
				std::cout << "Your order: Black tea sugar-free" << std::endl;
				break;

			case 41:
				std::cout << "Your order: Black tea with sugar" << std::endl;
				break;

			case 50:
				std::cout << "Your order: Green tea sugar-free" << std::endl;
				break;

			case 51:
				std::cout << "Your order: Green tea with sugar" << std::endl;
				break;
			}
		}

		else if (op == "if")//прогрмма на if
		{
			std::cout << "You choose statement 'if'" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Enter the code of the drink you want:" << std::endl;
			std::cout << std::endl;
			std::cout << "1 - Coffee americano" << std::endl;
			std::cout << "2 - Coffee latte" << std::endl;
			std::cout << "3 - Coffee expresso" << std::endl;
			std::cout << "4 - Tea black" << std::endl;
			std::cout << "5 - Tea green" << std::endl;
			std::cout << std::endl;

			std::cout << "Code: ";
			std::cin >> drink;
			std::cout << std::endl;
			std::cout << std::endl;

			if (drink1 == drink)
			{
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 9;
			}

			else if (drink2 == drink)
			{
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 18;
			}

			else if (drink3 == drink)
			{
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 27;
			}

			else if (drink4 == drink)
			{
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 36;
			}

			else if (drink5 == drink)
			{
				std::cout << "If you want sugar press(1), if not press (0): ";
				std::cin >> sugar;
				std::cout << std::endl;

				drink = drink + 45;
			}

			else
			{
				std::cout << "Error, you did not order. Restart program" << std::endl;
			}

			yourdrink = drink + sugar;

			if (yourdrink == 10)
			{
				std::cout << "Your order: Coffee americano sugar-free" << std::endl;
			}

			else if (yourdrink == 11)
			{
				std::cout << "Your order: Coffee americano with sugar" << std::endl;
			}

			else if (yourdrink == 20)
			{
				std::cout << "Your order: Coffee latte sugar-free" << std::endl;
			}

			else if (yourdrink == 21)
			{
				std::cout << "Your order: Coffee latte with sugar" << std::endl;
			}

			else if (yourdrink == 30)
			{
				std::cout << "Your order: Coffee expresso sugar-free" << std::endl;
			}

			else if (yourdrink == 31)
			{
				std::cout << "Your order: Coffee expresso with sugar" << std::endl;
			}

			else if (yourdrink == 40)
			{
				std::cout << "Your order: Black tea sugar-free" << std::endl;
			}

			else if (yourdrink == 41)
			{
				std::cout << "Your order: Black tea with sugar" << std::endl;
			}

			else if (yourdrink == 50)
			{
				std::cout << "Your order: Green tea sugar-free" << std::endl;
			}

			else if (yourdrink == 51)
			{
				std::cout << "Your order: Green tea with sugar" << std::endl;
			}

		}

		else
		{
			std::cout << "Error you dont select statement" << std::endl;

			_getch();
		}

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "If you want to make a new order press (Y): ";
		std::cin >> res;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}

	while (res == "Y" || res == "y");

	return 0;
}