#include <iostream>

#include "Person.h"

#include "Wallet.h"

#include "Student.h"

int main()
{
	/*

	// Create a variable with it
	person paul = {};
	person jon = { 15, 1000, 20 };

	printPerson(jon);

	/-----------------/
	// Closed Exercises
	/-----------------/

	// Defining A Piggy Bank
	// Create a variable with it
	piggyBank amount = {1, 1, 1, 1, 1, 1, 1};

	printPiggyBank(amount);

	//-------------//
	// Open Exercises
	//-------------//

	// Print Student)
	student Alexis = {189074, 1, 50};
	student Rey = { 223782, 2, 12 };

	std::cout << "Alexis" << std::endl;
	printStudent(Alexis);

	std::cout << " " << std::endl;
	
	std::cout << "Rey" << std::endl;
	printStudent(Rey);

	*/

	// Student Analytics)
	student roster[] = { {12006, 1, 45}, {12007, 2, 29}, {12008, 2, 32}, {12009, 1, 40}, {12010, 2, 47}, {12011, 2, 28} };
	printAvgTestScores(roster, 6);



	return 0;
}