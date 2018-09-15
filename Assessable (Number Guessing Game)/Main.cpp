#include <iostream>

using namespace::std;

int main(){

	bool computerGuess = false;
	char userInput;
	int numberOfGuesses = 0;
	int rangeMin;
	int rangeMax;

	cout << "Think of a number, then once you are ready, press enter to continue." << endl;
	(cin.get() == '\n');
	cout << '\n' << "Pick a minimum range then afterwards, pick a maximum range." << '\n' << "Make sure that the number you have chosen is in that range." << endl;
	cin >> rangeMin >> rangeMax;
	//cout << '\n' << "Range: " << rangeMin << " - " << rangeMax << endl;

	for (computerGuess; computerGuess == false; computerGuess = false) {
		
		int rangeMaxMinusMin = rangeMax - rangeMin;
		int rangeMMMDividedByTwo = rangeMaxMinusMin / 2;
		int rangeDifference = rangeMMMDividedByTwo + rangeMin;

		cout << '\n' << "Range: " << rangeMin << " - " << rangeMax << endl;
		cout << "Is " << rangeDifference << " less than ( < ), greater than ( > ) or equal ( = ) to your number?" << endl;
		cin >> userInput;
		
		if (userInput == '<') {
			rangeMin = rangeDifference;
			numberOfGuesses++;
			continue;
		}

		else if (userInput == '>') {
			rangeMax = rangeDifference;
			numberOfGuesses++;
			continue;
		}

		else if (userInput == '=') {
			computerGuess = rangeDifference;
			computerGuess = true;
			break;
		}

		cout << "Your number was " << rangeDifference << " The amount of guesses that it took was " << numberOfGuesses << "." << endl;
	}

	return -1;
}