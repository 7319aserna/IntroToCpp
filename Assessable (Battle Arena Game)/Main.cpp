#include <ctime>
#include <iostream>
#include "Battle Arena.h"

using namespace::std;

int main() {

	bool turn_Team_Iron_Man;
	bool turn_Team_Captain_America;
	int hero_Or_Heroine;
	int turn = 0;

	// Make the array of heroes
	Team_Iron_Man team_Iron_Man_Array[] = {
		{ "Iron Man", 25, 100 },
		{ "Spider Man", 10, 100 },
		{ "War Machine", 15, 100 },
		{ "Black Widow", 12, 100 },
		{ "Black Panther", 12, 100 },
		{ "Vision", 18, 100 },
	};

	Team_Iron_Man team_Captain_America_Array[] = {
		{ "Captain America", 25, 100 },
		{ "Hawkeye", 12, 100 },
		{ "Falcon", 15, 100 },
		{ "Bucky Barnes", 18, 100 },
		{ "Ant Man", 10, 100 },
		{ "Scarlet Witch", 20, 100 },
	};

	cout << "Team Iron Man" << endl;

	for (int i = 0; i < 6; ++i)
	{
		printHero(team_Iron_Man_Array[i]);
		/*if (i == 0){
		printHero(team_Iron_Man_Array[i]);
		}*/
	}

	cout << '\n' << "v.s." << endl;
	cout << '\n' << "Team Captain America" << endl;
	
	for (int i = 0; i < 6; ++i)
	{
		printHero(team_Captain_America_Array[i]);
	}

	turn++;
	cout << '\n' << "Turn: " << turn << endl;

	turn_Team_Iron_Man = true;

	if (turn_Team_Iron_Man == true) {
		srand((int)time(0));
		int i = 0;

		while (i++ < 1) {
			Team_Iron_Man tIMFight;
			Team_Captain_America tCAFight;

			hero_Or_Heroine = (rand() % 6) + 1;
			printHero(team_Iron_Man_Array[hero_Or_Heroine]);

			cout << "v.s." << endl;

			printHero(team_Captain_America_Array[hero_Or_Heroine]);

			cout << "When ready, press enter to continue." << endl;
			(cin.get() == '\n');

			}
	}
	return 0;
}