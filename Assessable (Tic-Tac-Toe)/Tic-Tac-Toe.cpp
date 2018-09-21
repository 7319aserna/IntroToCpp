#include <iostream>
#include <sstream>

#include "Tic-Tac-Toe.h"

using namespace::std;

void printThreeByThreeGrid(threeByThreeGrid &target)
{	
	std::cout << "Grid: 3 x 3" << std::endl;

	char threeByThreeGrid[3][3] =	 {{'1', '2', '3'},
									  {'4', '5', '6'},
									  {'7', '8', '9'}};

	for (int i = 0; i < 3; i++)
	{
		for (int n = 0; n < 3; n++)
		{
			std::cout << threeByThreeGrid[i][n];
		}
		std::cout << std::endl;
		continue;
	}
}

void printPlayerOneAndTwoInput(playerOneAndTwoInput &target) {
	// Player One is True and, Player Two is False.
	bool playerOneOrTwo = true;
	int userInput;
	
	// Try to change this tomorrow
	char gridThreeByThree[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };

	if (playerOneOrTwo == true) {
		int i = 0;
		int n = 0;
		gridThreeByThree[i][n];

		cout << endl;
		cout << "Player One, please enter a number below." << endl;
		cin >> userInput;

		int x = 0;
		int y = 0;

		y = (userInput - 1) % 3;
		x = (userInput - 1) / 3;

		gridThreeByThree[x][y] = 'X';

		for (int i = 0; i < 3; i++)
		{
			for (int n = 0; n < 3; n++)
			{
				cout << gridThreeByThree[i][n];
			}
			std::cout << std::endl;
			continue;
		}
		playerOneOrTwo = false;

		if (playerOneOrTwo == false) {

			cout << "Player Two, please enter a number below." << endl;
			cin >> userInput;

			int x = 0;
			int y = 0;

			y = (userInput - 1) % 3;
			x = (userInput - 1) / 3;

			gridThreeByThree[x][y] = 'O';

			for (int i = 0; i < 3; i++)
			{
				for (int n = 0; n < 3; n++)
				{
					cout << gridThreeByThree[i][n];
				}
				std::cout << std::endl;
				continue;
			}
			//playerOneOrTwo = true;
		}
	}
}

void printPlayerOneAndTwoRepeatProcess(playerOneAndTwoRepeatProcess &target) {
	threeByThreeGrid tBTG;
	printThreeByThreeGrid(tBTG);
	
	bool playerOneAndTwoRepeatProcessTrueOrFalse = true;
	
	while (playerOneAndTwoRepeatProcessTrueOrFalse == true){
	playerOneAndTwoInput pOATI;
	printPlayerOneAndTwoInput(pOATI);

	//playerOneAndTwoRepeatProcessTrueOrFalse = false;
	//continue;
	}
}