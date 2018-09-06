#include "Person.h"
#include <iostream>

void Person::Greet()
{
	std::cout << "Hello" << std::endl;
}

int Person::getCake() {
	return poundCake;
}

void Person::useCakes(int qty)
{
	poundCake -= qty;
}

void Person::eatMeal() {
	if (poundCake > 0)
		return;

	poundCake--;
	
	if (this->health < 100)
		this->health++;
	else
	{
		this->health--;
	}
}