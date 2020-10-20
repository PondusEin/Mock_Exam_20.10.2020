#include <iostream>
#include <vector>
#include <algorithm>
#include "MainMenu.h"

void printtask2(std::vector <Information> InformationVector) {
	for (int i = 0; i < InformationVector.size(); i++)
	{
		std::cout << i << '\t' << InformationVector.at(i).initial << '\t' << InformationVector.at(i).randomvalue << '\t';
		for (int k = 0; k < InformationVector.at(i).randomvalue; k++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
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
	printtask2(InformationVector);
	std::cout << "\n\n";
	std::cout << "No.\tName\tValue\tHealth Bar" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	//std::sort(InformationVector.begin(), InformationVector.end(), std::greater<int>());
	//for (auto a : InformationVector)
	//{
	//	//std::cout << a << " ";
	//}
	//
	system("pause");
	system("cls");
}
