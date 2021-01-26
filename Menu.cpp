#include "global.h"

void MenuSelect() {
	if (Bright >= 255) {
		if (CheckStateKey(KEY_INPUT_DOWN) == 1) {
			SEFlag[0] = true;
			MenuSelectNum = (MenuSelectNum + 1) % 3;
			MenuArrowBrink = 0;
		}
		else if (CheckStateKey(KEY_INPUT_UP) == 1) {
			SEFlag[0] = true;
			MenuSelectNum = (MenuSelectNum + 2) % 3;
			MenuArrowBrink = 0;
		}
	}
}

void MenuChoice() {
	if (!FeedOutFlag) {
		if (Bright >= 255) {
			if (CheckStateKey(KEY_INPUT_RETURN) == 1) {
				SEFlag[1] = true;
				FeedOutFlag = true;
			}
		}
	}
	else {
		if (Bright > 0) {
			SetDrawBright(Bright, Bright, Bright);
			Bright -= 20;
			if (Bright <= 0) {
				Bright = 0;
				FeedOutFlag = false;
				switch (MenuSelectNum)
				{
				case 0:
					func_state = 2;
					MusicStop();
					MUSIC[0].flag = true;
					break;
				case 1:
					func_state = 10;
					break;
				case 2:
					DxLib_End();
					break;
				default:
					break;
				}
			}
		}
	}
}

void MenuMain() {
	MenuSelect();
	MenuChoice();
}