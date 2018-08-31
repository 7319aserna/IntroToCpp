#include<iostream>

/*
void initArr(int * arr, int size, int defaultVal)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = defaultVal;
	}
}
*/

//Closed Exercises
int sumTwoIntPtrs(int * a, int * b)
{
	return *a + *b;
}

int main()
{
	/*
	// Create a single object on the heap
	int * age = new int(0);

	// Create an array object on the heap
	int * ages = new int[10];

	// Pass a heap instantiated object to an object

	// Always delete (well, maybe not always... but for now, always)
	delete age;
	delete[] ages;
	*/

	// instantiate two pointers to heap-allocated integers
	int * numAPtr = new int(10);
	int * numBPtr = new int(15);

	std::cout << "numA: " << *numAPtr << std::endl;
	std::cout << "numB: " << *numBPtr << std::endl;

	// provide them as args
	int res = sumTwoIntPtrs(numAPtr, numBPtr);

	std::cout << "summ: " << res << std::endl;

	// clean-up
	delete numAPtr;
	delete numBPtr;

	return 0;
}