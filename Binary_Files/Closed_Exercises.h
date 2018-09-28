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

//--------------------------------------------------//

// This Is For The Open Exercise!!!
using namespace::std;

class monster {
public:
	const char * id;
	const char * name;
	string monsterFileName;
};
void printMonsterOrMonsters(const monster &entity);

struct monster_Creature_Quest {
};
void printMonster_Creature_Quest(monster_Creature_Quest target);

struct deleteOpenExerciseFile {
};
void printDeleteOpenExerciseFile(deleteOpenExerciseFile target);