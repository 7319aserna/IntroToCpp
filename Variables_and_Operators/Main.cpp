#include<iostream>

int main()
{
	/*

	Variables and Operators

	*/

	std::cout << "This is the second program!!!" << std::endl;

	// Print a variable to the console
	int weight = 144;

	std::cout << "Here is my weight " << weight << std::endl;

	// Prompt the user to enter their weight
	int userWeight = -1;

	std::cout << "What is your weight?" << std::endl;
	std::cin >> userWeight;

	std::cout << "Your weight is " << userWeight << std::endl;


	// Closed Exercises


	// A)
	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;

	// B)
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;

	// C)
	int numberC = 3;
	numberC = 7;
	numberC = 21;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;

	// D)
	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;

	// E)
	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	// F)
	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;

	// Celsius to Fahrenheit)
	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;

	degFahrenheit = degCelsius * 2.21f;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	// Prompt the user to enter their own value
	float userDegCelsius = 1.0f;
	float userDegFahrenheit = 1.0f;

	std::cout << "Please enter a value to be converted from Celsius to Fahrenheit" << std::endl;
	std::cin >> userDegCelsius; 

	userDegFahrenheit = userDegCelsius * 2.21f;
	
	std::cout << "The Fahrenheit is now: " << userDegFahrenheit << std::endl;

	// Area of a Rectangle)

	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	std::cout << "Area of a Rectangle)" << std::endl;

	std::cout << "What is the Width? ";
	std::cin >> rectWidth;
	std::cout << "What is the Height? ";
	std::cin >> rectHeight;

	rectArea = rectWidth * rectHeight;

	std::cout << "W: " << rectHeight << " , H: " << rectWidth << std::endl;
	std::cout << "Area : " << rectArea << std::endl;

	// Open Exercises

	// Average of Five)
	float a, b, c, d, e;
	float avg; 
	avg = a = b = c = d = e = 0.0f;

	std::cout << "Average of Five)" << std::endl;
	std::cout << "Please enter the first number" << std::endl;
	std::cin >> a;

	std::cout << "Please enter the second number" << std::endl;
	std::cin >> b;

	std::cout << "Please enter the third number" << std::endl;
	std::cin >> c;
	
	std::cout << "Please enter the fourth number" << std::endl;
	std::cin >> d;
	
	std::cout << "Please enter the fifth and final number" << std::endl;
	std::cin >> e;

	avg = (a + b + c + d + e) / 5.0f;

	std::cout << "The average is: " << avg << std::endl;

	// Number Swap) (To be edited later)
	int originalX = 13;
	int originalY = 24;

	int temp = x;

	originalX = originalY;
	originalY = temp;

	std::cout << "Number Swap)" << std::endl;

	std::cout << "x is " << originalX << std::endl;
	std::cout << "y is " << originalY << std::endl;



	// Fun Facts For Your Age)

	int age = -1;

	std::cout << "How old are you in years?" << std::endl;
	std::cin >> age;

	std::cout << "You've been alive for " << age << " years." << std::endl;

	return 0;
}