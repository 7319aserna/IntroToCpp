#include <ctime>
#include <string>
#pragma once

using namespace std;
class heroes {
	public:
		const char * name;
		int attackPower;
		int health;
};

void printHero(const heroes &player)
{
	cout << endl;
	cout << player.name << endl;	// print name
	cout << "Attack Power: " << player.attackPower << endl;	// print attack
	cout << "Health: " << player.health << endl;	// print health
}