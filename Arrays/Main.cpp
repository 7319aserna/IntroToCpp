#include<iostream>

/*
void intializeToTwo(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 2;
	}
}
*/

// Closed Exercises

// Print an Array of Numbers
void ArrayofNumbers(int numbers[], int size)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	for (int i = 0; i < 4; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}

int main()
{
	/*
	// Create an int array
	int numbers[5];// = { 0, 0, 0, 0, 0 };

	intializeToTwo(numbers, 5);

	// Access an array via index
	// Iterate over an array
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < 5; ++i)
	{
		std::cout << numbers[i] << std::endl;
	}

	// Pass arrays into functions
	*/

	// Closed Exercises

	int valuesA[]{ 0, 1, 2, 3 };
	{
		{
			ArrayofNumbers(valuesA, 4);
		}

	int valuesB[]{ 2, 4, 8, 16, 32, 64 };
	{
		ArrayofNumbers(valuesB, 6);
	}

	int valuesC[]{ 33, 74, 52, 9, };
	{
		ArrayofNumbers(valuesC, 5);
	}
}

	return 0;
}