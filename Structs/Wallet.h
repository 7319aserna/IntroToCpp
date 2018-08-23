#pragma once

// Closed Exercises

// Defining A Piggy Bank
struct piggyBank
{
	// The number of one-dollar bills in the piggy.
	int oneDollarBills;
	// The number of two-dollar bills in the piggy.
	int twoDollarBills;
	// The number of five-dollar bills in the piggy.
	int fiveDollarBills;
	// The number of quarters in the piggy.
	float quarters;
	// The number of dimes in the piggy.
	float dimes;
	// The number of nickels in the piggy.
	float nickels;
	// The number of pennies in the piggy.
	float pennies;

	struct dollarBills
	{
		// The number of one-dollar bills in the piggy.
		int oneDollarBills;
		// The number of two-dollar bills in the piggy.
		int twoDollarBills;
		// The number of five-dollar bills in the piggy.
		int fiveDollarBills;
	};

	struct coins 
	{
		// The number of quarters in the piggy.
		float quarters;
		// The number of dimes in the piggy.
		float dimes;
		// The number of nickels in the piggy.
		float nickels;
		// The number of pennies in the piggy.
		float pennies;
	};
};

//void printPiggyBank(piggyBank target);

