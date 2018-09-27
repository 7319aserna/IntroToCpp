#include <ctime>
#include <iostream>
#include "Battle Arena.h"

using namespace::std;

void simulateBattle(const heroes &attacker, heroes &defender) {
	heroes aAndD;
	int test;

	aAndD.name = "Iron Man";

	defender.health -= attacker.attackPower;
	
	//if (aAndD.name == "Iron Man" && aAndD.health <= 0) { //&& "War Machine" && "Black Widow" && "Black Panther" && "Vision") {
	//	if (aAndD.health <= 0) {
	//		cout << "Team Captain America Wins!!!" << endl;
	//		cin >> test;
	//	}
	//}

	cout << attacker.name << " attacks " << defender.name << " and does " << attacker.attackPower << " in damage!" << endl;
	cout << defender.name << "'s Health Remaining: " << defender.health << '\n';
}

int main() {

	// If true, then Team Iron Man goes first, if false, then Team Captain America goes
	bool heroesTurn;
	int team_Iron_Man_hero_Or_Heroine;
	int team_Captain_America_hero_Or_Heroine;
	int turn = 0;

	// Make the array of heroes
	heroes team_Iron_Man_Array[] = {
		{ "Iron Man", 25, 100 },
		{ "Spider Man", 10, 100 },
		{ "War Machine", 15, 100 },
		{ "Black Widow", 12, 100 },
		{ "Black Panther", 12, 100 },
		{ "Vision", 18, 100 },
	};

	heroes team_Captain_America_Array[] = {
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
	}

	cout << '\n' << "v.s." << endl;
	cout << '\n' << "Team Captain America" << endl;
	
	for (int i = 0; i < 6; ++i)
	{
		printHero(team_Captain_America_Array[i]);
	}

	turn++;
	srand((int)time(0));
	heroesTurn = true;

	if (heroesTurn == true) {
		int i = 0;

		while (true) {
			while (i == 0) {

				cout << '\n' << "Turn: " << turn << endl;

				team_Iron_Man_hero_Or_Heroine = (rand() % 5);
				team_Captain_America_hero_Or_Heroine = (rand() % 5);

				// This would check if anyone from Team Iron Man is defeated
				if (team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].health <= 0) {
					cout << team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].name << " is already defeated!!!" << endl;
					continue;
				}

				// This would check if anyone from Team Captain America is defeated
				if (team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].health <= 0) {
					cout << team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].name << " is already defeated!!!" << endl;
					continue;
				}

				printHero(team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine]);

				cout << "v.s." << endl;

				printHero(team_Captain_America_Array[team_Captain_America_hero_Or_Heroine]);

				cout << '\n' << "When ready, press enter to continue." << endl;
				(cin.get() == '\n');

				
				simulateBattle(team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine], team_Captain_America_Array[team_Captain_America_hero_Or_Heroine]);

				turn++;
				i=1;
			}

			while (i == 1) {

				cout << '\n' << "Turn: " << turn << endl;

				team_Captain_America_hero_Or_Heroine = (rand() % 5);
				team_Iron_Man_hero_Or_Heroine = (rand() % 5);
				
				// This would check if anyone from Team Captain America is defeated
				if (team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].health <= 0) {
					cout << team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].name << " is already defeated!!!" << endl;
					continue;
				}

				// This would check if anyone from Team Iron Man is defeated
				if (team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].health <= 0) {
					cout << team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].name << " is already defeated!!!" << endl;
					continue;
				}

				printHero(team_Captain_America_Array[team_Captain_America_hero_Or_Heroine]);

				cout << '\n' << "v.s." << endl;

				printHero(team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine]);

				cout << '\n' << "When ready, press enter to continue." << endl;
				(cin.get() == '\n');

				simulateBattle(team_Captain_America_Array[team_Captain_America_hero_Or_Heroine], team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine]);

				turn++;
				i=0;

				continue;
			}
		}
	}
	return 0;
}