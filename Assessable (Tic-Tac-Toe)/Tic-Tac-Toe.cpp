#include<iostream>

#include "Tic-Tac-Toe.h"

void printGridThreeByThree(gridThreeByThree target)
{
	int columns = 3;
	int rows = 3;
	
	std::cout << "Grid: " << columns << "x" << rows << std::endl;

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

void printPlayer(player target)
{
	char playerOnePiece;
	char playerTwoPiece;

	gridThreeByThree threeBythree = {};
	printGridThreeByThree(threeBythree);

	std::cout << "Now, chose who is Player One and Player Two." << std::endl;
	std::cout << std::endl;
	std::cout << "Alright, Player One, your piece is the 'x'. Player Two, your piece is the 'y'." << std::endl << "Now Player One, choose a number that is displayed on the grid above and then press enter to continue after you have made your selection." << std::endl;
	std::cin >> playerOnePiece;
	

}
