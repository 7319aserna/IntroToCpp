// Save Data
#pragma once
#include <string>

struct hello_World {
	std::string userInput;
};
void printHelloWorld(hello_World target);

struct saveData {
	std::string playerName;
	int deathCount;
	int deepestFloor;

	bool hasBeatenGame;

	double timePlayed; // Given in seconds
};
void printSaveData(saveData target);

struct deleteFile {
};
void printDeleteFile(deleteFile target);