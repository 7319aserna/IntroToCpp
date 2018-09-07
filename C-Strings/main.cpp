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
	/*
	char lowercaseASCIIval = 'a';	// This is '97'
	char uppercaseASCIIval = 'A';	// This is '65'

	if (lowercaseASCIIval != uppercaseASCIIval) {
		lowercaseASCIIval -= 32;

		std::cout << lowercaseASCIIval << std::endl;
	}
	*/

	/*
	// One Letter
	char ASCIIvalWOneLetter;	// User inputs their own letter
	char UserInputPromptWOneLetter[15] = "Enter a letter";

	std::cout << UserInputPromptWOneLetter << std::endl;
	std::cin >> ASCIIvalWOneLetter;

	if (ASCIIvalWOneLetter) {

		ASCIIvalWOneLetter -= 32;

		std::cout << ASCIIvalWOneLetter << std::endl;
	}
	*/

	// Two Letters
	char ASCIIvalWTwoLetters[2];	// User inputs their own two letters
	char ASCIIvalFirstNumber;
	char ASCIIvalSecondNumber;
	char UserPromptWFirstLetter[23] = "Enter the first letter";
	char UserPromptWSecondLetter[24] = "Enter the second letter";
	
	std::cout << UserPromptWFirstLetter << std::endl;
	std::cin >> ASCIIvalFirstNumber;
	
	if (ASCIIvalFirstNumber) {

		ASCIIvalFirstNumber -= 32;
	}

	std::cout << UserPromptWSecondLetter << std::endl;
	std::cin >> ASCIIvalSecondNumber;

	if (ASCIIvalSecondNumber) {

		ASCIIvalSecondNumber -= 32;
	}

	ASCIIvalFirstNumber == ASCIIvalSecondNumber;

	if (ASCIIvalFirstNumber == ASCIIvalSecondNumber) {
		ASCIIvalFirstNumber && ASCIIvalSecondNumber = ASCIIvalWTwoLetters;
	}

	return -1;
}