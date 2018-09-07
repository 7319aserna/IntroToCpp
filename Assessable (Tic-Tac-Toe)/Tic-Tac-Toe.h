#pragma once

// Declaring a struct
struct gridThreeByThree
{
	char threeByThreeGrid[3][3] = {};
	// The amount of columns in the grid
	int columns;
	// The amount of rows in the grid.
	int rows;
};
void printGridThreeByThree(gridThreeByThree target);

struct player
{
	// Player One's piece will be "X"
	char playerOnePiece;
	// Player Two's piece will be "O"
	char playerTwoPiece;
	
};
void printPlayer(player target);