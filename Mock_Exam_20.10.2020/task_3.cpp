#include <iostream>
#include <string>
#include <conio.h>

const char WIDTHS = 10, HEIGHTS = 10;
unsigned char players = 'E';
int posiX = 1, posiY = 1;
char inputs;
long long prevPosiX = posiX;
long long prevPosiY = posiY;
int points = 0;
void playerActions();

unsigned char boards[WIDTHS][HEIGHTS] = {
		{'#','#','#','#','#',' ','#','#','#','#' },
		{'#',' ',' ',' ',' ',' ',' ',' ','-','#' },
		{'#','-','|','#','#',' ',' ','#','-','#' },
		{'#',' ','|','-',' ','#','-','|','-','#' },
		{'#','-',' ',' ','|','-','|','-','-','#' },
		{'#',' ','|',' ','|','-','|','|',' ','#' },
		{'#',' ','|','-',' ',' ',' ','|',' ','#' },
		{'#',' ','|','#','#',' ','#','|',' ','#' },
		{'#',' ','-',' ',' ',' ',' ',' ',' ','#' },
		{'#','#','#','#','#',' ','#','#','#','#' },
};

void playerActions() {

	prevPosiX = posiX;
	prevPosiY = posiY;
	unsigned char space = { 32 };
	inputs = _getch();
	switch (inputs)
	{
	case 'W': case 'w':
		posiX--;
		system("cls");
		break;
	case 'A': case 'a':
		posiY--;
		system("cls");
		break;
	case 'D': case 'd':
		posiY++;
		system("cls");
		break;
	case 'S': case 's':
		posiX++;
		system("cls");
		break;
	default:
		std::cout << "Incorrect move!" << std::endl;
		break;
	}
	boards[prevPosiX][prevPosiY] = ' ';
}

void task3() {
	system("cls");

	while (inputs != '§') {
		std::cout << "Move your player using WASD. Press [0] to exit." << std::endl;
		std::cout << "Points:" << points;
		std::cout << std::endl;

		boards[posiX][posiY] = players;

		for (int y = 0; y < HEIGHTS; y++)
		{
			std::cout << std::endl;
			for (int x = 0; x < WIDTHS; x++) {

				std::cout << boards[y][x];

			}
		}

		playerActions();
		if (boards[posiX][posiY] != ' ')
		{

			if (boards[posiX][posiY] == '#')
			{
				posiX = prevPosiX;
				posiY = prevPosiY;
			}
			else if (boards[posiX][posiY] == '-')
			{
				points += 5;
			}
			else if (boards[posiX][posiY] == '|')
			{
				posiX = prevPosiX;
				posiY = prevPosiY;
			}
			else if (boards[posiX][posiY] == 'H')
			{
				std::cout << "You win! Well done! ";
				break;
			}
		}
		if (posiY < 0)
		{
			posiY = 9;
		}
		if (posiY > 9)
		{
			posiY = 0;
		}
		if (posiX < 0)
		{
			posiX = 9;
		}
		if (posiX > 9)
		{
			posiX = 0;
		}
		if (inputs == '0')
		{
			return;
		}
	}
	std::cout << "Press any button to return to main menu!" << '\n';
	return;
}
