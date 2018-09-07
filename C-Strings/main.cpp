#include <iostream>
#include <cstring>

int main()
{
	/*
	// Closed Exercises
	// Greeting)
	char nameIntroduction[23] = "Please enter your name";
	char greeting[12] = "Greetings ";
	char name[32];

	std::cout << nameIntroduction << std::endl;
	std::cin >> name;
	std::cout << std::endl;
	std::cout << greeting << name << "!" << std::endl;

	// Favorite Color)
	char colorQuestion[29] = "What is your favorite color?";
	char colorInput[32];
	char orangeInput[7] = "Orange";
	char redInput[4] = "Red";
	char otherInput[32];

	std::cout << std::endl;
	std::cout << colorQuestion << std::endl;
	std::cin >> colorInput;

	if (strcmp(colorInput, orangeInput) == 0) {
		char orangeFeedback[24] = "Orange is also a fruit.";
		std::cout << std::endl;
		std::cout << orangeFeedback;
	}

	if (strcmp(colorInput, redInput) == 0) {
		char redFeedback[30] = "Red? Like the color of roses?";
		std::cout << std::endl;
		std::cout << redFeedback;
	}

	else
	{
		if (strcmp(colorInput, otherInput) != 0) {
			char otherFeedback[39] = "I've never heard of that color before.";
			std::cout << otherFeedback << std::endl;
		}
	}
	*/

	// To Upper)
	int lcAndUcASCIIvalDiff = ' ';
	int lowercaseNumberASCIIval = 'a';	// This is '97'
	int uppercaseNumberASCIIval = 'A';	// This is '65'

	if (lowercaseNumberASCIIval != uppercaseNumberASCIIval) {
		lowercaseNumberASCIIval + lcAndUcASCIIvalDiff;
	}

	std::cout << lowercaseNumberASCIIval << std::endl;

	return -1;
}