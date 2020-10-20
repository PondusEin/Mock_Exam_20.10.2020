#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
#include <ctime>
#include <array>
#include <vector>
#include <cstdlib>
#include "MainMenu.h"


int main()
{
	srand(static_cast <unsigned int> (std::time(nullptr)));
	password();
	do
	{
		system("cls");
		std::cout << "Please select task [1-4]" << std::endl;
		std::cout << "\nTask [1]: Dice game, to see total values of each die."
			" \nTask [2]: Healthbar and values"
			" \nTask [3]: Board game that let's you move around, like Pac-Man."
			" \nTask [4]: Pacman esque game with enemies.\n\nPress [5] to exit" << std::endl;
		std::cin >> task;
		switch (task)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			exit(EXIT_SUCCESS);
		default:
			system("cls");
			break;
		}
	} while (true);
}
