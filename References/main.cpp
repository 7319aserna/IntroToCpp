#include <iostream>

void refSum(int a, int b, int& c);

// Closed Practice
// Product of Two Floats)
void refProduct(float a, float b, float &product);

// Swap)
void swap(float &a, float &b);

int main() {

	int myVal = 0;
	int& myRef = myVal;

	std::cout << "myVal=" << myVal << std::endl;
	std::cout << "myRef=" << myRef << std::endl;

	myVal = 2;
	std::cout << "myVal=" << myVal << std::endl;
	std::cout << "myRef=" << myRef << std::endl;

	myVal = 3;
	std::cout << "myVal=" << myVal << std::endl;
	std::cout << "myRef=" << myRef << std::endl;

	int myC = 0;
	refSum(1, 2, myC);
	std::cout << "Myc=" << myC << std::endl;

	char b;
	std::cin >> b;

	// Closed Practice
	// Syntax for References)
	// Variables
	int num = 22;
	float dec = 22.22f;
	bool tf = false;
	char letter = 'a';

	// References to said variables
	int& numRef = num;	// A reference to an int
	std::cout << "myNum=" << num << std::endl;
	std::cout << "numRef=" << numRef << std::endl;

	float& decRef = dec;	// A reference to an float
	std::cout << "myDec=" << dec << std::endl;
	std::cout << "decRef=" << decRef << std::endl;

	bool& tfRef = tf;	// A reference to an bool
	std::cout << "myTf=" << tf << std::endl;
	std::cout << "tfRef=" << tfRef << std::endl;

	char& letterRef = letter;	// A refernce to a char
	std::cout << "myLetter=" << letter << std::endl;
	std::cout << "letterRef=" << letterRef << std::endl;

	// Product of Two Floats)
	float myProduct = 0.0f;
	refProduct(25.5f, 75.0f, myProduct);
	std::cout << "Product:" << myProduct << std::endl;

	// Swap)
	float firstNumber = 25.5f;
	float secondNumber = 75.0f;
	swap(firstNumber, secondNumber);

	return -1;
}

void refSum(int a, int b, int& c) {
	c = a + b;
}

// Closed Practice
// Product of Two Floats)
void refProduct(float a, float b, float &product)
{
	product = a * b;
}

// Swap)
void swap(float &a, float &b) {
	float temp = a;
	a = b;
	b = temp;
}