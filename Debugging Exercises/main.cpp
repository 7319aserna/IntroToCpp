#include <iostream>
#include <random>
#include <stdlib.h>
#include <string>
#include <time.h>

//// Question 4)
//bool containsValue(int value, int * arr, int arrSize)
//{
//	for (int i = 0; i < arrSize; i++)
//	{
//		if (arr[i] == value)
//		{
//			return true;
//		}
//	}
//
//	return false;
//}

int main() {

	//Question 1)
	std::cout << "Provide two numbers and you will be given the sum." << std::endl;

	int firstNumA = -1;
	int secondNumB = -1;
	std::cin >> firstNumA >> secondNumB;

	std::cout << "The sum of the two numbers is " << (firstNumA + secondNumB) << "." << std::endl;

	//Question 2)
	std::cout << "-=xXx FOUR FUNCTION CALCULATOR PUNCH xXx=-" << std::endl;

	std::cout << "What are your two numbers?" << std::endl;

	double numA = -1.0;
	double numB = -1.0;
	double result = -1.0;

	std::cin >> numA >> numB;

	std::cout << "What operation would you like to perform? (+, -, /, *)" << std::endl;

	char operation = ' ';
	std::cin >> operation;

	switch (operation)
	{
	case '+':
		result = numA + numB;
		break;
	case '-':
		result = numA - numB;
		break;
	case '/':
		result = numA / numB;
		break;
	case '*':
		result = numA * numB;
		break;
	default:
		std::cout << "Sorry, that isn't a recognized operation." << std::endl;
	}

	std::cout << "Your final result was " << result << std::endl;

	// Question 3)
	std::string names[10] =
	{
		"Terry Nguyen",
		"Johnny Collins",
		"Taerrance Tooker",
		"Kristen Uguudesu",
		"Nisha Williera",
		"Davin Jobbson",
		"Michael Pascal",
		"Jamison Cardigan",
		"Charles Hernia",
		"Reggie Grawcannon"
	};

	srand(time(NULL));

	size_t index = rand() % 10;

	std::cout << "Your random name is " << names[index] << std::endl;

	//// Question 4)
	//int nums[] = {0, 5, 7, 1, 2, 3};

	//bool result = containsValue(7, nums, 6);

	//if (result == true)
	//	std::cout << "The value was " << result << "...found!" << std::endl;

	//else
	//	std::cout << "The value was " << result << "...Not found!" << std::endl;
	return 0;
}