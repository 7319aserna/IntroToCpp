#include <iostream>

// Closed Exercises

// Print an Array of Floats)
void printFloat(float * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

// Sum of an Integer Array)
int printSum(int * arr, int size)
{
	int sum = 0;

	for (int n = 0; n < size; n++)
	{
		sum = sum + arr[n];
	}
	return sum;
}

// Initializing an Array of Booleans)

// Initializes all the values of a boolean array to the given default value
void initBools(bool * arr, int size, bool defaultValue)
{
	for (int o = 0; o < size; o++)
	{
		*(arr + o) = defaultValue;
		std::cout << *(arr + o) << std::endl;
	}
}

// Open Exercises

/*
// Get Integer Subarray)
void subarray(int * srcArr, int * dstArr, int startIdx, int endIdx);
{

}
*/

int main()
{
	/*
	int coffeeCup = 0;
	int * pointer = &coffeeCup;

	std::cout << coffeeCup << std::endl;
	std::cout << pointer << std::endl;
	std::cout << *pointer << std::endl;

	coffeeCup = 3;
	std::cout << "Coffee is now 3" << std::endl;

	std::cout << coffeeCup << std::endl;
	std::cout << pointer << std::endl;
	std::cout << *pointer << std::endl;

	*pointer = 7;
	std::cout << "assign 7 to value pointed by pointer" << std::endl;
	std::cout << coffeeCup << std::endl;
	std::cout << pointer << std::endl;
	std::cout << *pointer << std::endl;

	int numbers[] = { 0, 5, 7, 9, 99, 99 };

	int gummyBear = 5;

	int val = getFirstNumber(&gummyBear);
	*/

	// Closed Exercises

	// Print an Array of Floats)
	std::cout << "(Print an Array of Floats)" << std::endl;
	float numbers[] = { 0.2f, 5.25f, 7.50f, 9.75f, 99.45f, 99.99f };
	printFloat(numbers, 6);
	std::cout << std::endl;

	// Sum of an Integer Array)
	std::cout << "(Sum of an Integer Array)" << std::endl;
	int sumNumbers[] = { 0, 5, 7, 9, 22, 25 };
	std::cout << printSum(sumNumbers, 6) << std::endl;
	std::cout << std::endl;

	/*
	// Initializing an Array of Booleans)
	std::cout << "(Initializing an Array of Booleans)" << std::endl;
	bool tureOrFalse[] = { true, true, false, true };
	initBools(tureOrFalse, 4, true);

	int empArr[] = {3};

	subarray(otherNumbers, empArr, )
	*/

	return 0;
}

// Get Integer Subarray)
void subarray(int * srcArr, int * dstArr, int startIdx, int endIdx)
{
	int idx = 0;

	for (int i = startIdx; i < endIdx; ++i)
	{
		dstArr[idx] = srcArr[i];
		idx++;
	}
}
