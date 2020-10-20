#pragma once

class Information
{
public:
	
	int number[10];
	char initials;
	int randomvalue = rand() % 20 + 1;
private:

};


void task2() {
	system("cls");
	int array[4][10];

	std::cout << "No.\tName\tValue\tHealth Bar" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << array[0][i] << '\t' << array[1][i] << '\t' << array[2][i] << '\t' << array[3][i] << std::endl;
	}
	system("pause");
	system("cls");
}

void initials() {
	
	for (int i = 0; i < 10; i++)
	{
		
	}
	
}