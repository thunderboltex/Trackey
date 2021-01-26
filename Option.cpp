#include "global.h"

void OptionVSSelect() {
	if (CheckStateKey(KEY_INPUT_UP) == 1) {
		OptionArrowBlink = 0;
		if(OptionSelect == 0)		//volume
			SEFlag[0] = true;
		else if (OptionSelect == 1) {
			SEFlag[0] = true;
			OptionSelect = 0;
		}
		else if (OptionSelect == 2) {
			SEFlag[0] = true;
			OptionSelect = 1;
		}
	}
	else if (CheckStateKey(KEY_INPUT_DOWN) == 1) {
		OptionArrowBlink = 0;
		if (OptionSelect == 2)		//speed
			SEFlag[0] = true;
		else if (OptionSelect == 1) {
			SEFlag[0] = true;
			OptionSelect = 2;
		}
		else if (OptionSelect == 0) {
			SEFlag[0] = true;
			OptionSelect = 1;
		}
	}
}

void OptionVolumeSelect() {
	if (OptionSelect == 0) {
		if (CheckStateKey(KEY_INPUT_RIGHT) == 1 || CheckStateKey(KEY_INPUT_LEFT) == 1) {
			if (CheckStateKey(KEY_INPUT_RIGHT) == 1) {
				if (OptionVolume < 2) {
					SEFlag[0] = true;
					OptionVolume += 1;
					VolumeButton.X = 730 + OptionVolume * 150;
				}
			}
			if (CheckStateKey(KEY_INPUT_LEFT) == 1) {
				if (OptionVolume > 0) {
					SEFlag[0] = true;
					OptionVolume -= 1;
					VolumeButton.X = 730 + OptionVolume * 150;
				}
			}
			for (int i = 0; i < SE_MAX; i++) {
				ChangeVolumeSoundMem(255 * 33 * (OptionVolume + 1) / 100, SE[i]);
			}
			for (int i = 0; i < BGM_MAX; i++) {
				ChangeVolumeSoundMem(255 * 33 * (OptionVolume + 1) / 100, BGM[i]);
			}
			for (int i = 0; i < MUSIC_MAX; i++) {
				ChangeVolumeSoundMem(255 * 33 * (OptionVolume + 1) / 100, MUSIC[i].Track);
			}
		}
	}
}

void OptionSpeedSelect() {
	if (OptionSelect == 1) {
		if (CheckStateKey(KEY_INPUT_RIGHT) == 1) {
			if (OptionSpeed < 3) {
				SEFlag[0] = true;
				OptionSpeed += 1;
				SpeedButton.X = 720 + OptionSpeed * 100;
				NotesSpeed += 0.5;
			}
		}
		if (CheckStateKey(KEY_INPUT_LEFT) == 1) {
			if (OptionSpeed > 0) {
				SEFlag[0] = true;
				OptionSpeed -= 1;
				SpeedButton.X = 720 + OptionSpeed * 100;
				NotesSpeed -= 0.5;
			}
		}
	}
}

void OptionBackCheck() {
	if (OptionSelect == 2) {
		if (CheckStateKey(KEY_INPUT_RETURN) == 1) {
			func_state = 1;
		}
	}
}

void OptionMain() {
	if (Bright >= 255) {
		OptionVSSelect();
		OptionVolumeSelect();
		OptionSpeedSelect();
		OptionBackCheck();
	}
}