#pragma once

struct calculateDifference {
	bool computerGuess = false;
	char userInput;
	char exit = 'e' | 'E';
	int numberOfGuesses = 0;
	int rangeMin;
	int rangeMax;
	int rangeMaxMinusMin = rangeMax - rangeMin;
	int rangeMMMDividedByTwo = rangeMaxMinusMin / 2;
	int rangeDifference = rangeMMMDividedByTwo + rangeMin;
};
void printCalculateDifference(calculateDifference target);