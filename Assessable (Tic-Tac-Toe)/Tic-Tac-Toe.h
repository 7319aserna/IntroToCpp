#pragma once

// Declaring a struct
struct threeByThreeGrid
{
	char gridThreeByThree;
};
void printThreeByThreeGrid(threeByThreeGrid &target);

struct playerOneAndTwoInput {
	// Player One is True and, Player Two is False.
	bool playerOneOrTwo;
	int userInput;
};
void printPlayerOneAndTwoInput(playerOneAndTwoInput &target);