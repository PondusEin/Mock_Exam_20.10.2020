#pragma once
#include <conio.h>
#include <iostream>

const char WIDTH = 3, HEIGHT = 3;

unsigned char player = '*';
int posX = 0, posY = 0;
char input;
int playermovements=0;
int attempts = 0;

signed char board[WIDTH][HEIGHT] = {
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'} };


void playerAction()
{

	long long prevPosX = posX;
	long long prevPosY = posY;
	
	input = _getch();
	switch (input)
	{
	case 'W': case 'w':
		posX--;
		playermovements++;
		system("cls");
		break;
	case 'A': case 'a':
		posY--;
		playermovements++;
		system("cls");
		break;
	case 'D': case 'd':
		posY++;
		playermovements++;
		system("cls");
		break;
	case 'S': case 's':
		posX++;
		playermovements++;
		system("cls");
		break;
	default:
		std::cout << "Incorrect move!" << std::endl;
		break;
	}
}

void password() {
	system("cls");
	while (true)
	{
		
		std::cout << "Move your player using WASD." << std::endl;
		std::cout << std::endl;

		board[posX][posY] = player;

		for (int x = 0; x < WIDTH; x++)
		{
			std::cout << std::endl;
			for (int y = 0; y < HEIGHT; y++)
			{
				std::cout << board[x][y];

			}
		}
		playerAction();
		if (board[posX][posY] != '3')
		{
			if (board[posX][posY] == '6' || board[posX][posY] == '7' || board[posX][posY] == '8' || board[posX][posY] == '9')
			{
				std::cout << "Error: Wrong password, Please try again. HINT: DOWN, RIGHT, UP, RIGHT" << std::endl;
				attempts++;
				if (attempts >= 3)
				{
					std::cout << "test" << attempts;
					exit(EXIT_SUCCESS);
				}
			}
			else if (playermovements >= 4)
			{
				std::cout << "Error: Too many movements, Please try again. HINT: DOWN, RIGHT, UP, RIGHT" << std::endl;
				attempts++;
				if (attempts >= 3)
				{
					std::cout << "test2" << attempts;
					exit(EXIT_SUCCESS);
				}
			}
		}
		else if (board[posX][posY] == '3')
		{
			break;
		}
	}
		

}