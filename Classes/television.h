#pragma once

class Television {

private:
	int currentChannel;
	int currentVolume;

public:
	void increaseVolume();	// increases the volume by one
	void decreaseVolume();	// decreases the volume by one

	int volume();			// returns the current volume

	void increaseChannel(); // increases the current channel num by one
	void decreaseChannel(); // decreases the current channel num by one

	int channel();			// returns the current channel

	void mainMenu();		// menu which leads to the options listed above
};