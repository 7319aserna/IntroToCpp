#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Closed_Exercises.h"

bool closedExercisesWrite(std::string filePath, std::string message) {
	std::fstream file;

	file.open(filePath.c_str(), std::ios::out | std::ios::binary | std::ios::app);

	if (file.fail()) {
		std::cerr << "File not found." << std::endl;
		return false;
	}

	file.clear(); // reset error flags (such as End Of File)

	file.seekp(0, std::ios_base::end); // move the cursor to the end of the file for writing

	file << message;

	file.flush();
	file.close();

	return true;
}

void printDeleteFile(deleteFile target) {
	if (remove("save_Data.bin") != 0)
		perror("Error deleting file");
	else
		puts("File successfully deleted");
}

// Hello World)
void printHelloWorld(hello_World target) {

	std::string userInput;
	using namespace::std;

	cout << "What .bin file would you like to create?" << endl;
	cin >> userInput;

	closedExercisesWrite(userInput, "Hello World!");
}

// Save Data)
void printSaveData(saveData target) {

	deleteFile dF;
	printDeleteFile(dF);

	std::string playerName;
	using namespace::std;

	int deathCount;
	int deepestFloor;

	bool hasBeatenGame;

	double timePlayed; // Given in seconds

	cout << "Hello Adventurer! What is your name?" << endl;
	cin >> playerName;

	srand((int)time(0));
	int i = 0;
	while (i++ < 1) {
		deathCount = (rand() % 99) + 1;
	}

	int j = 0;
	while (j++ < 1) {
		deepestFloor = (rand() % 99) + 1;
	}

	double k = 0;
	while (k++ < 1) {
		timePlayed = (rand() % 99) + 1;
	}

	std::string deathCountIntToString = to_string(deathCount);
	std::string deepestFloorIntToString = to_string(deepestFloor);
	std::string timePlayedDoubleToString = to_string(timePlayed);

	std::string playerNameString = "Hello Adventurer! What is your name? " + '\n' + playerName + "!" + '\n' + "You can see your stats below or you can also check them out in the save_Data.bin file.";
	std::string deathcountString = playerNameString + '\n' + "Death Count: " + deathCountIntToString;
	std::string deepestFloorString = deathcountString + '\n' + "Deepest Floor: " + deepestFloorIntToString;
	std::string timePlayedString = deepestFloorString + '\n' + "Time Played: " + timePlayedDoubleToString;

	closedExercisesWrite("save_Data.bin", timePlayedString);
}