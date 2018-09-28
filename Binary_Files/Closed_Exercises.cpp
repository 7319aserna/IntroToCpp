#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Closed_Exercises.h"

// This Is For The Closed Exercises!!!
void closedExercisesRead(std::string filePath)
{
	using std::string;
	using std::getline;
	std::fstream file;

	// open a file relative to the working directory of the project
	file.open(filePath, std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return;
	}


	string name = "";
	string deathCount = "";
	string deepestFloor = "";
	string timeBeaten = "";

	getline(file, name);
	getline(file, deathCount);
	getline(file, deepestFloor);
	getline(file, timeBeaten);

	std::cout << "Name: " << name << std::endl;
	std::cout << "Death Count: " << name << std::endl;
	std::cout << "Deepest Floor: " << name << std::endl;
	std::cout << "Time Beaten: " << name << std::endl;
		
	// reset error flags (such as EOF)
	file.clear();

	// close and release the file
	file.close();

	return ;
}

bool closedExercisesWrite(std::string filePath, std::string message) {
	std::fstream file;

	file.open(filePath, std::ios::in | std::ios::binary);
		if (file.fail()) {
			file.close();
			file.open(filePath, std::ios::out | std::ios::binary);
			// reset error flags (such as EOF)
			file.clear();

			// move the cursor to the end of the file for writing
			file.seekp(0, std::ios_base::end);



			// write a message to the text file
			file << message;
			file << "\n";
			file.flush();   // flush the output buffer, making sure all outputs are sent
			file.close();   // close and release the file
		}
		else 
		{
			file.close();
			file.open(filePath, std::ios::app | std::ios::binary);
			// reset error flags (such as EOF)
			file.clear();

			// move the cursor to the end of the file for writing
			file.seekp(0, std::ios_base::end);



			// write a message to the text file
			file << message;
			file << "\n";

			file.flush();   // flush the output buffer, making sure all outputs are sent
			file.close();   // close and release the file
		}

	return true;
}

void printDeleteFile(deleteFile target) {
	if (remove("save_Data.bin") != 0)
		perror("save_Data.bin was not Found");
	else
		puts("save_Data.bin successfully deleted");
}

// Hello World)
void printHelloWorld(hello_World target) {

	std::string userInput;
	using namespace::std;

	cout << "What .bin file would you like to create?" << endl;
	cin >> userInput;
	cout << endl;

	closedExercisesWrite(userInput, "Hello World!");
}

// Save Data)
void printSaveData(saveData target) {

	//hello_World h_W;
	//printHelloWorld(h_W);

	deleteFile dF;
	printDeleteFile(dF);

	std::string playerName;
	using namespace::std;

	int deathCount;
	int deepestFloor;

	bool hasBeatenGame;

	double timePlayed; // Given in seconds

	cout << '\n' << "Hello Adventurer! What is your name?" << endl;
	cin >> playerName;
	//std::getline(cin, playerName);
	
	cout << '\n' << "Welcome " << playerName << "!" << '\n' << "You can see your stats in the save_Data.bin file." << endl;

	srand((int)time(0));
	int i = 0;
	while (i++ < 1) {
		deathCount = (rand() % 99);
	}

	int j = 0;
	while (j++ < 1) {
		deepestFloor = (rand() % 99);
	}

	double k = 0;
	while (k++ < 1) {
		timePlayed = (rand() % 99);
	}

	int l = 0;
	while (l++ < 1) {
		hasBeatenGame = (rand() % 1);
	}

	std::string deathCountIntToString = to_string(deathCount);
	std::string deepestFloorIntToString = to_string(deepestFloor);
	std::string timePlayedDoubleToString = to_string(timePlayed);
	std::string hasBeatenGameToString = to_string(hasBeatenGame);
	
	system("CLS");

	closedExercisesWrite("save_Data.bin", playerName );
	closedExercisesWrite("save_Data.bin", deepestFloorIntToString  );
	closedExercisesWrite("save_Data.bin", deathCountIntToString  );
	closedExercisesWrite("save_Data.bin", timePlayedDoubleToString  );

	closedExercisesRead("save_Data.bin");
}
//--------------------------------------------------//

// This Is For The Open Exercise!!!
using namespace::std;

void printDeleteOpenExerciseFile(deleteOpenExerciseFile target) { 
	if (remove("lamia.bin") != 0)
		perror("lamia.bin was not Found");
	else
		puts("lamia.bin successfully deleted");

	if (remove("dullahan.bin") != 0)
		perror("dullahan.bin was not Found");
	else
		puts("dullahan.bin successfully deleted");

	if (remove("wallmaster.bin") != 0)
		perror("wallmaster.bin was not Found");
	else
		puts("wallmaster.bin successfully deleted");

	if (remove("mimic.bin") != 0)
		perror("mimic.bin was not Found");
	else
		puts("mimic.bin successfully deleted");

	if (remove("minotaur.bin") != 0)
		perror("minotaur.bin was not Found");
	else
		puts("minotaur.bin successfully deleted");
}

bool openExerciseWrite(std::string filePath, std::string message)
{
	std::fstream file;

	// open a file relative to the working directory of the project
	cout << filePath.c_str();
	file.open(filePath.c_str(), std::ios::out | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return false;
	}

	// reset error flags (such as EOF)
	file.clear();

	// move the cursor to the end of the file for writing
	file.seekp(0, std::ios_base::end);

	// write a message to the text file
	file << message;

	file.flush();   // flush the output buffer, making sure all outputs are sent
	file.close();   // close and release the file

	return true;
}

// This is similar to above, but in line 243, instead of std::ios::out, it is std::ios::in
bool openExerciseWriteButWithoutIosOut(std::string filePath, std::string message)
{
	std::fstream file;

	// open a file relative to the working directory of the project
	cout << filePath.c_str();
	file.open(filePath.c_str(), std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return false;
	}

	// reset error flags (such as EOF)
	file.clear();

	// move the cursor to the end of the file for writing
	file.seekp(0, std::ios_base::end);

	// write a message to the text file
	file << message;

	file.flush();   // flush the output buffer, making sure all outputs are sent
	file.close();   // close and release the file

	return true;
}

std::string openExerciseRead(std::string filePath)
{
	std::fstream file;

	// open a file relative to the working directory of the project
	file.open(filePath.c_str(), std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return "";
	}

	std::string buffer;
	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		cout << buffer << endl;
	}

	// reset error flags (such as EOF)
	file.clear();

	// close and release the file
	file.close();

	return buffer;
}

// Monster Creature Quest (MCQ)
void printMonsterOrMonsters(const monster &entity)
{
	cout << endl;
	cout << entity.id << " - " << entity.name << endl; // Print ID and Name
	cout << entity.monsterFileName << '\n' << endl; // Print .bin file 
}

void printMonster_Creature_Quest(monster_Creature_Quest target) {

	bool selectedOption = false;
	int userInput;

	monster monsterArray[] = {
	{"000", "Lamia - It's a thing that I don't of", "lamia.bin" },
	{"001", "Dullahan - It's a thing that I don't of as well!!!", "dullahan.bin" },
	{"002", "Wallmaster - It's from the Legend of Zelda, right?", "wallmaster.bin" },
	{"003", "Mimic - All i can say is that it reminds me of those chests in Dark Souls, boooo, so spooky...", "mimic.bin" },
	{"004", "Minotaur - Hey, he's pretty cool I guess...", "minotaur.bin" },
	};

	/*openExerciseRead("lamia.bin");
	openExerciseRead("dullahan.bin");
	openExerciseRead("wallmaster.bin");
	openExerciseRead("mimic.bin");
	openExerciseRead("minotaur.bin");*/

	system("CLS");

	cout << "Welcome to Monster Creature Quest." << '\n' << endl;

	selectedOption = true;
	while (selectedOption == true) {

	cout << "What would you like to do?" << '\n' << endl;
	cout << "1) Add a monster by ID" << '\n' << "2) Remove a monster by ID" << '\n' << "3) View a monster by ID" << '\n' << "4) Browse monsters" << '\n' << "5) Exit" << '\n' << endl;
	cin >> userInput;

		// add a monster
		if (userInput == 1) {
			cout << '\n' << "what monster would you like to add?" << endl;
			cin >> userInput;

			if (userInput < -1 | userInput > 5) {
				cout << endl;
				continue;
			}

			monsterArray[userInput].monsterFileName;

			openExerciseWrite(monsterArray[userInput].monsterFileName, "");
			cout << '\n' << endl;
			continue;
		}

		if (userInput == 2) {
			cout << '\n' << "what monster would you like to remove?" << endl;
			cin >> userInput;

			if (userInput < -1 | userInput > 5) {
				cout << endl;
				continue;
			}

			const char * test = "";

			test = monsterArray[userInput].monsterFileName.c_str();

			if (remove(test) != 0)
				perror("Error deleting file");
			else
				puts("File successfully deleted");
			cout << '\n' << endl;
			continue;
		}

		if (userInput == 3) {
			cout << '\n' << "Which monster would you like to view?" << endl;
			cin >> userInput;

			if (userInput < -1 | userInput > 5) {
				cout << endl;
				continue;
			}

			openExerciseWriteButWithoutIosOut(monsterArray[userInput].monsterFileName, "");

			if (cout << "")
		}

		if (userInput == 4) {
			cout << "Here are all of the monsters on disk: " << endl;
		}

		if (userInput == 5) {
			return;
		}
	}
}