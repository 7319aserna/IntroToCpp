#include <iostream>
#include <string>
#include <sstream>

#include "Tic-Tac-Toe.h"

using namespace::std;

void printThreeByThreeGrid(threeByThreeGrid &target)
{	
	std::cout << "Grid: 3 x 3" << std::endl;

	char threeByThreeGrid[3][3] =	 {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

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
	threeByThreeGrid tBTG;
	printThreeByThreeGrid(tBTG);

	// Player One is True and, Player Two is False.
	bool playerOneOrTwo;
	// Since only 9 possible inputs, once it gets to 9, then it draws
	int drawCounter = 0;
	int userInput;

	char gridThreeByThree[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };

	for (playerOneOrTwo; playerOneOrTwo = true;) {

		// Player One
		if (playerOneOrTwo == true) {
			int i = 0;
			int n = 0;

			gridThreeByThree[i][n];

			cout << endl;
			cout << "Player One, please enter a number below." << endl;
			cin >> userInput;

			if (drawCounter == 9) {
				cout << '\n' << "Draw - No One Wins" << endl;
				break;
			}

			int x = 0;
			int y = 0;

			y = (userInput - 1) % 3;
			x = (userInput - 1) / 3;
			// If Player Two's piece is already there
			if (gridThreeByThree[x][y] == 'O') {
				cout << '\n' << "Error, Player 2's piece is already in place." << endl;
				continue;
			}
			if (gridThreeByThree[x][y] == 'X') {
				cout << "You already have a piece here, try again" << endl;
				continue;
				drawCounter++;

				cout << endl;
				std::cout << "Grid: 3 x 3" << std::endl;
			}
			gridThreeByThree[x][y] = 'X';

			int counter = 0;

			// Left and Right
			for (int i = 0; i < 3; ++i)
			{
				for (int n = 0; n < 3; ++n)
				{
					if (gridThreeByThree[i][n] == 'X')
					{
						counter++;
						if (counter == 3) {
							cout << "Congrats" << endl;
						}
						continue;
					}
					else
					{
						counter = 0;
						break;
					}
				}
			}

			//Up and Down
			for (int n = 0; n < 3; ++n)
			{
				for (int i = 0; i < 3; ++i)
				{
					if (gridThreeByThree[i][n] == 'X')
					{
						counter++;
						if (counter == 3) {
							cout << endl;
							cout << "Congrats Player One!!!" << endl;
						}
						continue;
					}
					else
					{
						counter = 0;
						break;
					}
				}
			}

			// Diagonal (Decided to hardcode it, sorry ) = )
			if ((gridThreeByThree[0][0] == 'X') && (gridThreeByThree[1][1] == 'X') && (gridThreeByThree[2][2] == 'X')) {
				cout << "Congrats Player One!!!" << endl;
				break;
			}

			// Diagonal (Decided to hardcode it, sorry ) = )
			if ((gridThreeByThree[0][2] == 'X') && (gridThreeByThree[1][1] == 'X') && (gridThreeByThree[2][0] == 'X')) {
				cout << "Congrats Player One!!!" << endl;
				break;
			}

			for (int i = 0; i < 3; i++) {

				for (int n = 0; n < 3; n++) {
					cout << gridThreeByThree[i][n];
				}
				cout << endl;
				continue;
			}
			playerOneOrTwo = false;
		}
		// Player Two
		if (playerOneOrTwo == false) {

			cout << endl;
			cout << "Player Two, please enter a number below." << endl;
			cin >> userInput;

			int x = 0;
			int y = 0;

			y = (userInput - 1) % 3;
			x = (userInput - 1) / 3;

			// If Player One's piece is already there
			if (gridThreeByThree[x][y] == 'X') {
				cout << '\n' << "Error, Player 1's piece is already in place." << endl;
				continue;
			}
			if (gridThreeByThree[x][y] == 'X') {
				cout << "You already have a piece here, try again" << endl;
				continue;
				drawCounter++;

				cout << endl;
				std::cout << "Grid: 3 x 3" << std::endl;
				gridThreeByThree[x][y] = 'O';

				int counter = 0;

				// Left and Right
				for (int i = 0; i < 3; ++i)
				{
					for (int n = 0; n < 3; ++n)
					{
						if (gridThreeByThree[i][n] == 'O')
						{
							counter++;
							if (counter == 3) {
								cout << endl;
								cout << "Congrats Player Two!!!" << endl;
							}
							continue;
						}
						else
						{
							counter = 0;
							break;
						}
					}
				}

				//Up and Down
				for (int n = 0; n < 3; ++n)
				{
					for (int i = 0; i < 3; ++i)
					{
						if (gridThreeByThree[i][n] == 'X')
						{
							counter++;
							if (counter == 3) {
								cout << endl;
								cout << "Congrats" << endl;
							}
							continue;
						}
						else
						{
							counter = 0;
							break;
						}
					}
				}

				// Diagonal (Decided to hardcode it, sorry ) = )
				if ((gridThreeByThree[0][0] == 'O') && (gridThreeByThree[1][1] == 'O') && (gridThreeByThree[2][2] == 'O')) {
					cout << "Congrats Player One!!!" << endl;
					break;
				}

				// Diagonal (Decided to hardcode it, sorry ) = )
				if ((gridThreeByThree[0][2] == 'O') && (gridThreeByThree[1][1] == 'O') && (gridThreeByThree[2][0] == 'O')) {
					cout << "Congrats Player One!!!" << endl;
					break;
				}

				for (int i = 0; i < 3; i++) {

					for (int n = 0; n < 3; n++) {
						cout << gridThreeByThree[i][n];
					}
					std::cout << std::endl;
					continue;
				}
			}
		}
	}
}