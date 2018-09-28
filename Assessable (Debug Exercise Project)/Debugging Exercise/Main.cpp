#include <ctime>
#include <iostream>
#include "Marine.h"
#include "Zergling.h"

using namespace::std;
using std::cout;
using std::endl;

int main()
{
	Marine squad;
	Zergling swarm;

	srand((int)time(0));

	int squadRemaining = 0;
	int swarmRemaining = 0;

	squad.attack = (rand() % 100);
	swarm.attack = (rand() % 100);

	cout << "In this scenario, choose how many Marines and how many Zerglings will appear." << endl;
	cout << "Marines = "; cin >> squadRemaining;

	cout << endl;

	cout << "Zerglings = "; cin >> swarmRemaining;

	cout << '\n' << "A squad of " << squadRemaining << " marines approaches a swarm of " << swarmRemaining << " Zerglings and opens fire! The Zerglings charge!" << endl;
	cin.ignore();
	cout << '\n' << "Press enter to continue" << endl;
	cin.ignore();

	// Attack each other until only one team is left alive
	while (squadRemaining > 0 && swarmRemaining > 0) // If anyone is left alive to fight . . .
	{
		system("CLS");

		squad.attack = (rand() % 100);
		swarm.attack = (rand() % 100);

		if (squadRemaining > 0) // if there's at least one marine alive
		{
			// each marine will attack the first zergling in the swarm
			cout << "A Marine fires for " << squad.attack << " damage. " << endl;
			swarm.health -= squad.attack;
			cout << "Zergling's Health: " << swarm.health;

			cout << '\n' << "Press enter to continue" << endl;
			cin.ignore();

			// if the zergling dies, it is marked as such
			if (swarm.health <= 0) {

				cout << '\n' << "The Zergling target dies" << endl;
				swarmRemaining--;
				swarm.health = 100;
				cout << "Swarm Remaining: " << swarmRemaining;
			}
		}

		if (swarmRemaining > 0) // if there's at least one zergling alive
		{
			cout << "A zergling attacks for " << swarm.attack << " damage." << endl;
			squad.health -= swarm.attack;
			cout << "Marine's Health: " << squad.health;

			cout << '\n' << "Press enter to continue" << endl;
			cin.ignore();

			// if the Marine dies, it is marked as such
			if (squad.health <= 0) {

				cout << '\n' << "The Marine target dies" << endl;
				squadRemaining--;
				squad.health = 100;
				cout << "Squad Remaining: " << squadRemaining;
			}
		}
	}

	// Once one team is completely eliminated, the fight ends and one team wins
	cout << '\n' << '\n' << "The fight is over. ";

	if (squadRemaining > 0) {
		cout << "The Marines win." << endl;
	}

	else if (swarmRemaining > 0) {
		cout << "The Zerg win." << endl;
	}

	cout << '\n' << "Thanks for playing, when ready press enter to exit." << endl;
	cin.ignore();
}