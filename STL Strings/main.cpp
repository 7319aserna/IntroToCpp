#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

using namespace std;

int main() {
	/*
	// Closed Exercises
	// Every Other)
	std::string everyOtherString = "abcdefgh";
	std::string lettersTwo="";

	for (int idx = 1; idx < everyOtherString.length(); idx += 2) {
		lettersTwo += everyOtherString.substr(idx, 1);
	}

	std::cout << "Every Other)" << std::endl;
	std::cout << "abcdefgh = " << lettersTwo << std::endl;

	std::string everyOtherString1 = "garbled";
	std::string lettersTwo1 = "";

	for (int idx = 1; idx < everyOtherString.length(); idx += 2) {
		lettersTwo1 += everyOtherString1.substr(idx, 1);
	}

	std::cout << std::endl;
	std::cout << "garbled = " << lettersTwo1 << std::endl;

	// Bestowing a Title)
	std::string nameUserInput;
	std::string title = ", the Dragon of Dojima";
	std::string nameAndTitle;

	std::cout << std::endl;
	std::cout << "Bestowing a Title)" << std::endl;
	std::cout << "What is your name?" << std::endl;
	std::cin >> nameUserInput;
	nameAndTitle = nameUserInput += title;
	std::cout << nameAndTitle << std::endl;

	// Open Exercises
	// Character Frequency)
	char letterOrWord;
	std::string string = "abcdef";
	int occurances;

	std::cout << std::endl;
	std::cout << "Character Frequency)" << std::endl;
	std::cout << "String = abcdef" << '\n' << "Enter a word or phrase to find any occurances in this string." << std::endl;
	std::cin >> letterOrWord;

	occurances = std::count(string.begin(), string.end(), letterOrWord);

	std::cout << "There are " << occurances << " occurances of " << letterOrWord << "." << std::endl;

	// Instance Counting)
	char letterOrWordv2;
	std::string stringv2;
	int occurancesv2;

	std::cout << std::endl;
	std::cout << "Instance Counting)" << std::endl;
	std::cout << "Enter a string of characters or words." << std::endl;
	std::cin >> stringv2;
	std::cout << "String = " << stringv2 << '\n' << "Enter a word or phrase to find any occurances in this string." << std::endl;
	std::cin >> letterOrWordv2;

	occurancesv2 = std::count(stringv2.begin(), stringv2.end(), letterOrWordv2);

	std::cout << "There are " << occurancesv2 << " occurances of " << letterOrWordv2 << "." << std::endl;
	*/

	// Hangman)
	//std::cout << std::endl;
	int strikes = 0;
	srand(time(NULL));  // Initialize the random seed
	std::string words[5] = { "Assessments", "C++", "Lunch", "Music", "Programming" };
	std::string coveredWords[3] = { "_ _ _ _ _ _ _ _ _ _ _", "_ _ _", "_ _ _ _ _" };
	int randomIndex = rand() % 3; // Generates a random number between 0 and 3
	
	std::cout << "Hangman)" << std::endl;
	std::cout << "Strikes: " << strikes << '\n' << '\n' << '\n';
	std::cout << coveredWords[randomIndex];

	if (strikes == 0) {
		char letter;
		std::cout << "Enter a letter!" << std::endl;
		std::cin >> letter;

		if (letter != coveredWords[randomIndex])
	}

	if (strikes == 5) {

	}

	return -1;
}