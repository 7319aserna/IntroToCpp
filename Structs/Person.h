#pragma once

// Declaring a struct
struct person
{
	// The age of the person given in years.
	int age;
	// The pocket change of the person given in GBP.
	float cash;
	// The amount of rewards points at their local deli.
	int points;
};

void printPerson(person target);