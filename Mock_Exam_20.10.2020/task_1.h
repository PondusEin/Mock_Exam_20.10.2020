#pragma once
#include <iostream>
#include <vector>

	std::vector <int> total;

	int sixes;
	int fives;
	int fours;
	int threes;
	int twos;
	int ones;


	int diceSixes(std::vector<int> array)
	{
		sixes = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (array.at(i) == 6)
			{
				sixes++;
			}
		}
		return sixes;
	}int diceFives(std::vector<int> array)
	{
		fives = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (array.at(i) == 5)
			{
				fives++;
			}
		}
		return fives;
	}int diceFours(std::vector<int> array)
	{
		fours = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (array.at(i) == 4)
			{
				fours++;
			}
		}
		return fours;
	}int diceThrees(std::vector<int> array)
	{
		threes = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (array.at(i) == 3)
			{
				threes++;
			}
		}
		return threes;
	}int diceTwos(std::vector<int> array)
	{
		twos = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (array.at(i) == 2)
			{
				twos++;
			}
		}
		return twos;
	}int diceOnes(std::vector<int> array)
	{
		ones = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (array.at(i) == 1)
			{
				ones++;
			}
		}
		return ones;
	}
	void diceRoll(std::vector<int>& array) {
		for (long long i = 0; i < array.size(); i++)
		{
			array.at(i) = rand() % 6 + 1;
			std::cout << array.at(i) << ' ';
		}
	}

	void keptDice(std::vector<int>& array) {
		diceOnes(total);
		diceTwos(total);
		diceThrees(total);
		diceFours(total);
		diceFives(total);
		diceSixes(total);
	}
	void task1() {
		system("cls");
		std::vector <int> total(2000);

		diceRoll(total);

		std::cout << "\nNumber of 1's:   " << diceOnes(total) << std::endl;
		std::cout << "\nNumber of 2's:   " << diceTwos(total) << std::endl;
		std::cout << "\nNumber of 3's:   " << diceThrees(total) << std::endl;
		std::cout << "\nNumber of 4's:   " << diceFours(total) << std::endl;
		std::cout << "\nNumber of 5's:   " << diceFives(total) << std::endl;
		std::cout << "\nNumber of 6's:   " << diceSixes(total) << std::endl;

		system("pause");
		system("cls");
	}