#include <iostream>

#include "Tic-Tac-Toe.h"

int main()
{

	int columns = 0;
	int rows = 0;

	/*
	while (columns == 0)
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
			columnsInput = columns;
			break;


		}
	}
	*/

	/*
	while (rows == 0)
	{
		int rowsInput = -1;
		std::cout << " " << std::endl;
		std::cout << "Now, enter the amount of rows you want. (Note: The amount of rows must be more than two.)" << std::endl;
		std::cin >> rowsInput;

		if (rowsInput < 3)
		{
			std::cout << " " << std::endl;
			std::cout << "You have entered: " << rowsInput << " " << "Please try again. (Note: The amount of rows must be more than two, and will also have to be the same amount as rows.)" << std::endl;
			std::cout << " " << std::endl;
			continue;
		}

		else if (rowsInput > 5)
		{
			std::cout << " " << std::endl;
			std::cout << "You have entered: " << rowsInput << " " << "Please try again. (Note: The amount of columns must be more than two, and will also have to be the same amount as columns.)" << std::endl;
			std::cout << " " << std::endl;
			continue;
		}

		else
		{	
			if (columns && rows)
			{
				std::cout << " " << std::endl;
				std::cout << "The amount of rows you have selected are: " << rowsInput << std::endl;
				rowsInput = rows;

				std::cout << " " << std::endl;
				std::cout << "Grid: " << columns << "x" << rows << std::endl;
				break;
			}
			else
			{
				std::cout << " " << std::endl;
				std::cout << "It seems that amount of columns and rows you have entered doesn't match, please make sure to enter the same amount of columns and rows." << std::endl;
				continue;
			}
		}
	}
	*/

	int inputColumns(int columns, int columnsInput);
	{
		while (columns == 0)
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
				columnsInput = columns;
				break;


			}
		}
	}
	

	int inputRows(int columns, int rows, int rowsInput);
	{
		while (rows == 0)
		{
			int rowsInput = -1;
			std::cout << " " << std::endl;
			std::cout << "Now, enter the amount of rows you want. (Note: The amount of rows must be more than two.)" << std::endl;
			std::cin >> rowsInput;

			if (rowsInput < 3)
			{
				std::cout << " " << std::endl;
				std::cout << "You have entered: " << rowsInput << " " << "Please try again. (Note: The amount of rows must be more than two, and will also have to be the same amount as rows.)" << std::endl;
				std::cout << " " << std::endl;
				continue;
			}

			else if (rowsInput > 5)
			{
				std::cout << " " << std::endl;
				std::cout << "You have entered: " << rowsInput << " " << "Please try again. (Note: The amount of columns must be more than two, and will also have to be the same amount as columns.)" << std::endl;
				std::cout << " " << std::endl;
				continue;
			}

			else
			{
				if (columns && rows)
				{
					std::cout << " " << std::endl;
					std::cout << "The amount of rows you have selected are: " << rowsInput << std::endl;
					rowsInput = rows;

					std::cout << " " << std::endl;
					std::cout << "Grid: " << columns << "x" << rows << std::endl;
					break;
				}
				else
				{
					std::cout << " " << std::endl;
					std::cout << "It seems that amount of columns and rows you have entered doesn't match, please make sure to enter the same amount of columns and rows." << std::endl;
					continue;
				}
			}
		}
	}

	return 0;
}