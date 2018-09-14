#include <iostream>

using namespace::std;

int main(){

	bool computerGuess = false;
	char userInput;
	int rangeMin;
	int rangeMax;

	cout << "Think of a number, then once you are ready, press enter to continue." << endl;
	(cin.get() == '\n');
	cout << '\n' << "Pick a minimum range then afterwards, pick a maximum range." << '\n' << "Make sure that the number you have chosen is in that range." << endl;
	cin >> rangeMin >> rangeMax;
	cout << '\n' << "Range: " << rangeMin << " - " << rangeMax << endl;

	if (computerGuess == false) {
		int rangeMinMinusMax = rangeMax - rangeMin;
		int rangeDifference = rangeMinMinusMax / 2;

		cout << "Is " << rangeDifference << " less than ( < ), greater than ( > ) or equal ( = ) to your number?" << endl;
		cin >> userInput;
		
		if (userInput == '<') {
			rangeMin = rangeDifference;
		}

		else if (userInput == '>') {
			rangeMax = rangeDifference;
		}

		else if (userInput == '=') {
			computerGuess == true;
		}
	}

	return -1;
}