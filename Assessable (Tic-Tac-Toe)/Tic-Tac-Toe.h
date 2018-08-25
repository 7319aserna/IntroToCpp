#pragma once

// Declaring a struct
struct grid
{
	// The amount of columns in the grid
	int columns;
	// The amount of rows in the grid.
	int rows;
};

struct player
{
	// The amount of players in the game
	int playerOne;
	int playerTwo;
	// The letter of the piece the player selected
	char piece;
};

/*
struct test
{
	char Alexis[5][5] = { {} , {} , {} , {} , {} };
	int Paul[5][5] = { {} , {} , {} , {} , {} };
	grid Terry[5][5] = { {} , {} , {} , {} , {} };
}
*/

void printGrid(grid target);
void printPlayerOneAndTwoInput(player target);