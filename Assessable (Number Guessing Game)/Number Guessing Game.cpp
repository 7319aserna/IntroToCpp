#include <iostream>
#include "Number Guessing Game.h"
#include <string>

using namespace::std;

void printCalculateDifference(calculateDifference target) {
	bool computerGuess = false;
	char userInput;
	char exit = 'e' | 'E';
	int numberOfGuesses = 0;
	int rangeMin;
	int rangeMax;

	cout << "Think of a number, then once you are ready, press enter to continue." << endl;
	(cin.get() == '\n');
	cout << '\n' << "Pick a minimum range then afterwards, pick a maximum range." << '\n' << "Make sure that the number you have chosen is in that range." << endl;
	cin >> rangeMin >> rangeMax;

	for (computerGuess; computerGuess == false; computerGuess = false) {

		int rangeMaxMinusMin = rangeMax - rangeMin;
		int rangeMMMDividedByTwo = rangeMaxMinusMin / 2;
		int rangeDifference = rangeMMMDividedByTwo + rangeMin;

		if (rangeMin == rangeMax) {
			string yesOrNoString;
			cout << '\n' << "Aha! your number is " << rangeDifference << " right?" << '\n' << "Enter Yes or No if the computer has guessed your number." << endl;
			cin >> yesOrNoString;
			
			if (yesOrNoString == "Yes" | yesOrNoString == "yes") {
					cout << '\n' << "Your number was " << rangeDifference << " and the amount of guesses that it took was " << numberOfGuesses << "." << endl;
					cout << "Thanks for playing! When ready, press e or E to exit." << endl;
				}
				
				if (yesOrNoString == "No" | yesOrNoString == "no") {
					cout << '\n' << "Error: USER ATTEMPTING TO CHEAT, LOCKING PROGRAM \n" << "Press E to exit program." << endl;
				}
			cin >> exit;

			if (exit == 'E' | 'e') {
				return;
			}
		}

		cout << '\n' << "Range: " << rangeMin << " - " << rangeMax << endl;
		cout << "Is " << rangeDifference << " less than ( < ), greater than ( > ) or equal ( = ) to your number?" << endl;
		cin >> userInput;

		if (userInput == '<') {

			if (userInput == '<' && rangeMax - rangeMin == 1) {
				rangeMin++;
				rangeDifference++;
				continue;
			}

			rangeMin = rangeDifference;
			numberOfGuesses++;
 
			cout << "Guesses: " << numberOfGuesses << endl;
			continue;
		}

		else if (userInput == '>') {

			if (rangeMax - rangeMin == 1) {
				rangeDifference++;
				rangeMin++;
				continue;
			}

			rangeMax = rangeDifference;
			numberOfGuesses++;
			cout << "Guesses: " << numberOfGuesses << endl;
			continue;
		}

		else if (userInput == '=') {
			computerGuess = rangeDifference;
			computerGuess = true;
		}

		cout << "Your number was " << rangeDifference << " and the amount of guesses that it took was " << numberOfGuesses << "." << endl;
		cout << '\n' << "Thanks for playing! When ready, press e or E to exit." << endl;
		cin >> exit;

		if (exit == 'E' | 'e') {
			return;
		}
	}
}

////Check to see if computer guessed correctly?
//if (rangeMin == rangeMax) {
//	cout << "Aha! your number is " << rangeDifference << " right?" << '\n' << "Enter Yes or No if the computer has guessed your number." << endl;
//	std::string yesOrNoString;
//	std::getline(std::cin, yesOrNoString);
//
//	if (yesOrNoString == "Yes" | yesOrNoString == "yes") {
//		cout << "Your number was " << rangeDifference << " and the amount of guesses that it took was " << numberOfGuesses << "." << endl;
//		cout << '\n' << "Thanks for playing! When ready, press e or E to exit." << endl;
//		continue;
//	}
//
//	if (yesOrNoString == "No" | yesOrNoString == "no") {
//		cout << "Error: USER ATTEMPTING TO CHEAT, LOCKING PROGRAM '\n' " << "Press E to exit program." << endl;
//		continue;
//	}
//	
//	cin >> exit;
//	if (exit == 'E' | 'e') {
//		return;
//		}
//	}