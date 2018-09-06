#include "television.h"
#include <iostream>

void Television::mainMenu()
{
	Television options;
	char userInput;
	
	std::cout << "Here is a list of options to choose from, to select an option, please press the button corresponding to the option below." << std::endl;
	std::cout << "W = Increase Volume" << std::endl;
	std::cout << "S = Decrease Volume" << std::endl;
	std::cin >> userInput;

	if (userInput == 'w')
	{
		options.increaseVolume();
	}
}

void Television::increaseVolume() {
	
	Television increaseVolumeOptions;
	char volumeUpInput;
	int volume = 0;
	int maxVolume = 100;

	while (volume < maxVolume) {

		std::cout << "Volume: " << volume << std::endl;
		std::cout << "Press E to go back, or W to increase the volume" << std::endl;
		std::cin >> volumeUpInput;

		if (volumeUpInput == 'w') {

			volume++;
			std::cout << std::endl;
			continue;

			if (volumeUpInput == 'e') {
				increaseVolumeOptions.mainMenu();
			}
		}
	}	
}

void Television::decreaseVolume() {

	char volumeDownInput;
	int volume = 100;
	int minVolume = 0;

	while (volume > minVolume) {

		std::cout << "Volume: " << volume << std::endl;
		std::cout << "Press E to go back, or S to increase the volume" << std::endl;
		std::cin >> volumeDownInput;

		if (volumeDownInput == 's') {

			volume--;
			std::cout << std::endl;
			continue;

			if (volumeDownInput == 'e') {
				break;
			}
		}
	}
}

int Television::volume()
{
	return 0;
}

void Television::increaseChannel()
{
}

void Television::decreaseChannel()
{
}

int Television::channel()
{
	return 0;
}