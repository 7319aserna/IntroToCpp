#include<iostream>

#include "Tic-Tac-Toe.h"

void printGrid(grid target)
{
	int columns = 0;
	int rows = 0;

	while (columns != -1)
	{
		int columnsInput = -1;
		std::cout << "Enter the amount of columns you want. (Note: The amount of columns must be more than two.)" << std::endl;
		std::cin >> columnsInput;

		if (columnsInput < 3)
		{
			std::cout << " " << std::endl;
			std::cout << "You have entered: " << columnsInput << " " << "Please try again. (Note: The amount of columns must be more than two.)" << std::endl;
			std::cout << " " << std::endl;
			continue;
		}

		else if (columnsInput > 5)
		{
			std::cout << " " << std::endl;
			std::cout << "You have entered: " << columnsInput << " " << "Please try again. (Note: The amount of columns must be more than two.)" << std::endl;
			std::cout << " " << std::endl;
			continue;
		}

		else
		{
			std::cout << " " << std::endl;
			std::cout << "The amount of columns you have selected are: " << columnsInput << std::endl;
			columns = columnsInput;

			if (rows != -1)
			{
				int rowsInput = -1;
				std::cout << " " << std::endl;
				std::cout << "Now, enter the amount of rows you want. (Note: The amount of rows must be more than two.)" << std::endl;
				std::cin >> rowsInput;
				rows = rowsInput;

				if (columns == rows)
				{
					std::cout << " " << std::endl;
					std::cout << "The amount of rows you have selected are: " << rowsInput << std::endl;
					std::cout << " " << std::endl;
					std::cout << "Grid: " << columns << "x" << rows << std::endl;

					if (columns && rows == 3)
					{
						std::cout << "  1   2   3 " << std::endl;
						std::cout << "1" "  " << rows << "| " << rows << " |" << rows << std::endl;
						std::cout << " ___|___|___" << std::endl;
						std::cout << "2" "  " << rows << "| " << rows << " |" << rows << std::endl;
						std::cout << " ___|___|___" << std::endl;
						std::cout << "3" "  " << rows << "| " << rows << " |" << rows << std::endl;
						std::cout << "    |   |   " << std::endl;
					}

					else if (columns && rows == 4)
					{
						std::cout << "  1   2   3   4 " << std::endl;
						std::cout << "1   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___" << std::endl;
						std::cout << "2   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___" << std::endl;
						std::cout << "3   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___" << std::endl;
						std::cout << "4   |   |   |   " << std::endl;
						std::cout << "    |   |   |   " << std::endl;
					}

					else
					{
						std::cout << "  1   2   3   4   5 " << std::endl;
						std::cout << "1   |   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___|___" << std::endl;
						std::cout << "2   |   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___|___" << std::endl;
						std::cout << "3   |   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___|___" << std::endl;
						std::cout << "4   |   |   |   |   " << std::endl;
						std::cout << " ___|___|___|___|___" << std::endl;
						std::cout << "5   |   |   |   |   " << std::endl;
						std::cout << "    |   |   |   |   " << std::endl;
					}
					break;
				}

				else if (columns != rows)
				{
					std::cout << " " << std::endl;
					std::cout << "It seems that amount of columns and rows you have entered doesn't match, please make sure to enter the same amount of columns and rows." << std::endl;
					std::cout << " " << std::endl;
					continue;
				}
			}
		}
	}
}

void printPlayerOneAndTwoInput(player target)
{
	grid test = {};
	printGrid(test);

	int playerOne;
	int playerTwo;

	std::cout << " " << std::endl;
	std::cout << "Player One, you are X, Player Two, you are Y." << std::endl;
	std::cout << "Player One, pick a Letter, then a Number" << std::endl;

//.	if (playerOne)
}