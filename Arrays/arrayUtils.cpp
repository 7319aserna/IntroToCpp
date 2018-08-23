#include "arrayUtils.h"

#include<iostream>

// Closed Exercises

/*
void arrayOfNumbers(int numbers[], int size) {
	
	if (size == 4)
	{
		std::cout << numbers[3];
		std::cout << numbers[2];
		std::cout << numbers[1];
		std::cout << numbers[0];
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i];
		std::cout << std::endl;
	}
}


// Returns the sum of all numbers in the array

int findIndex(int numbers[], int size, int value, int start)
{
	// Loop through the array
	for (int i = 0; i < size; i++)
	{
		// Find the first instance of the value I'm looking for and return it
		if (numbers[i] == value)
		{
			return i;
		}
	}

	// If the array had been exhausted, return -1
	return -1;
}
*/

// Reverse
void reverse(int numbers[], int size)
{
	for (int i = size / 2; i < size; i++)
	{
		int dstIdx = size - i - 1;

		int temp = numbers[i];
		numbers[i] = numbers[dstIdx];
		numbers[dstIdx] = temp;
	}
}
