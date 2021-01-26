#include "global.h"

void ChoiceEnter() {
	/*if (CheckStateKey(KEY_INPUT_RETURN) == 1) {
	if (LoadScore() == 1) {
	func_state = 2;
	}
	}*/
	if (CheckStateKey(KEY_INPUT_RETURN) == 1) {
		MusicStop();
		GameIni();
		if (LoadScore() == 1) {
			func_state = 3;
		}
	}
}

void ChoiceDifficulty() {
	if (CheckStateKey(KEY_INPUT_DOWN) == 1) {

		Difficulty = (Difficulty + 1) % 3;

	}
	else if (CheckStateKey(KEY_INPUT_UP) == 1) {

		Difficulty = (Difficulty + 2) % 3;

	}
}

void ChoiceMusicList() {

	if (CheckStateKey(KEY_INPUT_RIGHT) == 1) {

		ChoiceMusic = (ChoiceMusic + 1) % 5;
		MusicStop();
	}
	else if (CheckStateKey(KEY_INPUT_LEFT) == 1) {

		ChoiceMusic = (ChoiceMusic + 4) % 5;
		MusicStop();
	}
}

void ChoiceMain() {
	if (Bright >= 255) {
		ChoiceDifficulty();
		ChoiceMusicList();
		ChoiceEnter();
	}
}