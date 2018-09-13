#include <iostream>
#include <fstream>
#include <string>

#include "Closed Practices.h"

void printDigitalPrinter(digitalPrinter target) {
	std::fstream digitalPrinter;

	// Digital Printer)
	std::string userInput;
	std::string line;

	std::cout << "Howdy! What file would you like to read?" << '\n' << '\n' << "famousLines.txt, nuclearLaunchCodes.txt, commonAnimeTropes.txt" << std::endl;
	std::cin >> userInput;

	digitalPrinter.open(userInput, std::ios::in);
		
	if (!digitalPrinter.is_open()) {
		std::cout << "Failed to open file." << std::endl;
		return;
	}

	while (std::getline(digitalPrinter, line)) {
		std::cout << '\n' << line << std::endl;
	}
	std::cout << '\n' << "When finished, press e to exit." << std::endl;

	char exit;
	std::cin >> exit;

	while (exit != 'e') {

		if (exit == 'e') {
			digitalPrinter.flush();
			digitalPrinter.close();
			return;
		}
	}
}

void printMyInformation(myInformation target) {
	std::fstream myInformation;

	// My information)
	std::string name, age, color;
	std::string saveLocationInput;

	std::cout << "Where would you like to save?" << std::endl;
	std::cin >> saveLocationInput;

	myInformation.open(saveLocationInput, std::ios::out);

	std::cout << '\n' << "Who are you?" << std::endl;
	std::cin >> name;
	myInformation << "Name: " << name;

	std::cout << '\n' << "How old are you?" << std::endl;
	std::cin >> age;
	myInformation << '\n' << "Age: " << age;

	std::cout << '\n' << "What's your favorite color?" << std::endl;
	std::cin >> color;
	myInformation << '\n' << "Favorite Color: " << color;

	std::cout << '\n' << "Thanks! Now, check your file for your results." << std::endl;
	std::cout << '\n' << "When finished, press e to exit." << std::endl;
	
	char exit;
	std::cin >> exit;

	while (exit != 'e') {

		if (exit == 'e') {
			myInformation.flush();
			myInformation.close();
			return;
		}
	}
}

void printClosedPractices(closedPractices target) {
	digitalPrinter dP;
	printDigitalPrinter(dP);

	myInformation mI;
	printMyInformation(mI);
}

//std::fstream file;
//file.open("paul.txt", std::ios::out);
//file << "Hello Paul!";
//file.close();
//file.flush();