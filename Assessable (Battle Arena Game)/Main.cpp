#include <ctime>
#include <iostream>
#include "Battle Arena.h"

using namespace::std;

void simulateBattle(const heroes &attacker, heroes &defender) {

	defender.health -= attacker.attackPower;

	cout << attacker.name << " attacks " << defender.name << " and does " << attacker.attackPower << " in damage!" << endl;
	cout << defender.name << "'s Health Remaining: " << defender.health << '\n';
}

int main() {

	char exit = 'e' | 'E';

	// If true, then Team Iron Man goes first, if false, then Team Captain America goes
	bool heroesTurn;
	heroes randomAttackValue[12];
	int team_Iron_Man_hero_Or_Heroine;
	int team_Iron_Man_Remaining = 6;
	int team_Captain_America_hero_Or_Heroine;
	int team_Captain_America_Remaining = 6;
	int turn = 0;
	
	srand((int)time(0));

	for (int i = 0; i <= 12; i++) {
		randomAttackValue[i].attackPower = (rand() % 100);
	}

	// Make the array of heroes
	heroes team_Iron_Man_Array[] = {
		{ "Iron Man", randomAttackValue[1].attackPower, 100 },
		{ "Spider Man", randomAttackValue[2].attackPower, 100 },
		{ "War Machine", randomAttackValue[3].attackPower, 100 },
		{ "Black Widow", randomAttackValue[4].attackPower, 100 },
		{ "Black Panther", randomAttackValue[5].attackPower, 100 },
		{ "Vision", randomAttackValue[6].attackPower, 100 },
	};

	heroes team_Captain_America_Array[] = {
		{ "Captain America", randomAttackValue[7].attackPower, 100 },
		{ "Hawkeye", randomAttackValue[8].attackPower, 100 },
		{ "Falcon", randomAttackValue[9].attackPower, 100 },
		{ "Bucky Barnes", randomAttackValue[10].attackPower, 100 },
		{ "Ant Man", randomAttackValue[11].attackPower, 100 },
		{ "Scarlet Witch", randomAttackValue[12].attackPower, 100 },
	};

	cout << "Team Iron Man v.s. Team Captain America" << endl;

	cout << '\n' << "/********/" << '\n' << "Team Iron Man" << '\n' << "/********/" << endl;
	for (int i = 0; i < 6; ++i)
	{
		printHero(team_Iron_Man_Array[i]);
	}

	cout << '\n' << "/********/" << '\n' << "Team Captain America" << '\n' << "/********/" << endl;
	for (int i = 0; i < 6; ++i)
	{
		printHero(team_Captain_America_Array[i]);
	}

	turn++;
	cout << '\n' << "/********/" << '\n' << "Turn: " << turn << '\n' << "/********/" << endl;

	heroesTurn = true;

	if (heroesTurn == true) {
		int i = 0;

		while (true) {
			while (i == 0) {

				team_Iron_Man_hero_Or_Heroine = (rand() % 6);

				// This would check if anyone from Team Iron Man is defeated
				if (team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].health <= 0) {
					continue;
				}

				printHero(team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine]);

				cout << '\n' << "v.s." << endl;

				while (i == 0) {
					team_Captain_America_hero_Or_Heroine = (rand() % 6);

					// This would check if anyone from Team Captain America is defeated
					if (team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].health <= 0) {
						continue;
					}
					else break;
				}
				
				printHero(team_Captain_America_Array[team_Captain_America_hero_Or_Heroine]);

				cout << '\n' << "When ready, press enter to continue." << endl;
				(cin.get() == '\n');

				simulateBattle(team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine], team_Captain_America_Array[team_Captain_America_hero_Or_Heroine]);

				for (int i = 0; i < 6; i++)
				{
					if (team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].health <= 0) {
						team_Captain_America_Remaining--;
						cout << '\n' << "Team Captain America Heroes Remaining: " << team_Captain_America_Remaining << endl;

						if (team_Captain_America_Remaining == 0) {
							cout << "Team Iron Man Is Victorious!!!" << endl;
							cout << '\n' << "Thanks for playing, once ready, press E or e to exit." << endl;
							cin >> exit;
						}
					}
					break;
				}

				turn++;
				cout << '\n' << "/********/" << '\n' << "Turn: " << turn << '\n' << "/********/" << endl;
				i=1;
			}

			while (i == 1) {

				team_Captain_America_hero_Or_Heroine = (rand() % 6);

				// This would check if anyone from Team Captain America is defeated
				if (team_Captain_America_Array[team_Captain_America_hero_Or_Heroine].health <= 0) {
					continue;
				}

				printHero(team_Captain_America_Array[team_Captain_America_hero_Or_Heroine]);

				cout << '\n' << "v.s." << endl;

				while (i == 1) {
					team_Iron_Man_hero_Or_Heroine = (rand() % 6);

					// This would check if anyone from Team Iron Man is defeated
					if (team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].health <= 0) {
						continue;
					}
					else break;
				}
				
				printHero(team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine]);

				cout << '\n' << "When ready, press enter to continue." << endl;
				(cin.get() == '\n');

				simulateBattle(team_Captain_America_Array[team_Captain_America_hero_Or_Heroine], team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine]);

				for (int i = 0; i < 6; i++)
				{
					if (team_Iron_Man_Array[team_Iron_Man_hero_Or_Heroine].health <= 0) {
						team_Iron_Man_Remaining--;
						cout << '\n' << "Team Iron Man Heroes Remaining: " << team_Iron_Man_Remaining << endl;

						if (team_Iron_Man_Remaining == 0) {
							cout << "Team Captain America Is Victorious!!!" << endl;
							cout << '\n' << "Thanks for playing, once ready, press E or e to exit." << endl;
							cin >> exit;
						}
					}
					break;
				}

				turn++;
				cout << '\n' << "/********/" << '\n' << "Turn: " << turn << '\n' << "/********/" << endl;
				i=0;

				continue;
			}
		}
	}
	return 0;
}