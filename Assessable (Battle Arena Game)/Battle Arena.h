#include <ctime>
#include <string>
#pragma once

using namespace std;
class Team_Iron_Man {
	public:
		const char * name;
		int attackPower;
		int health;
};

void printHero(const Team_Iron_Man &player)
{
	cout << endl;
	cout << player.name << endl;	// print name
	cout << "Attack Power: " << player.attackPower << endl;	// print attack
	cout << "Health: " << player.health << endl;	// print health
}

void turn_Team_Iron_Man(Team_Iron_Man) {
	bool turn = true;

	Team_Iron_Man team_Iron_Man_Array[] = {
		{ "Iron Man", 25, 100 },
		{ "Spider Man", 10, 100 },
		{ "War Machine", 15, 100 },
		{ "Black Widow", 12, 100 },
		{ "Black Panther", 12, 100 },
		{ "Vision", 18, 100 },
	};

	for (int i = 0; i < 6; i++) {
		if (i = 0) {
			team_Iron_Man_Array[i];
			cout << team_Iron_Man_Array;
		}
	}
}

class Team_Captain_America {
public:
	const char * name;
	int attackPower;
	int health;
};

void printHero(const Team_Captain_America &player)
{
	cout << endl;
	cout << player.name << endl;	// print name
	cout << "Attack Power: " << player.attackPower << endl;	// print attack
	cout << "Health: " << player.health << endl;	// print health
}