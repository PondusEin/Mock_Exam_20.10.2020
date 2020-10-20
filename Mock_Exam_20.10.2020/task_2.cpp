#include <iostream>
#include <vector>
#include "MainMenu.h"

void printtask2(std::vector <Information> InformationVector) {

}
void task2() {
	system("cls");
	std::vector <Information> InformationVector(10);

	std::cout << "No.\tName\tValue\tHealth Bar" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	for (int i = 0; i < InformationVector.size(); i++)
	{
		InformationVector.at(i).initial = 65 + i;
		InformationVector.at(i).randomvalue = rand() % 20 + 1;
	}
	system("pause");
	system("cls");
}
