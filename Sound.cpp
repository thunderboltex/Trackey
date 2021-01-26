#include "global.h"

void MusicIni() {
	memset(BGMFlag, 0, sizeof(int)*BGM_MAX);
}

void MusicMain() {
	for (int i = 0; i < BGM_MAX; i++) {
		if (BGMFlag[i] == true) {
			PlaySoundMem(BGM[i], DX_PLAYTYPE_LOOP);
			BGMFlag[i] = false;
		}
	}
	for (int i = 0; i < SE_MAX; i++) {
		if (SEFlag[i] == true) {
			PlaySoundMem(SE[i], DX_PLAYTYPE_BACK);
			SEFlag[i] = false;
		}
	}
	for (int i = 0; i < MUSIC_MAX; i++) {
		if (MUSIC[i].flag == true) {
			PlaySoundMem(MUSIC[i].Track, DX_PLAYTYPE_BACK);
			MUSIC[i].flag = false;
		}
	}
}

void MusicStop() {
	for (int i = 0; i < BGM_MAX; i++) {
		if (CheckSoundMem(BGM[i]) == 1) {
			StopSoundMem(BGM[i]);
		}
	}
	for (int i = 0; i < MUSIC_MAX; i++) {
		if (CheckSoundMem(MUSIC[i].Track) == 1) {
			StopSoundMem(MUSIC[i].Track);
		}
	}
}

void MusicCheck() {
	if (FlameCount == DelayFlame) {
			MUSIC[ChoiceMusic].flag = true;
	}
	else if (FlameCount > DelayFlame) {
		if (CheckSoundMem(MUSIC[ChoiceMusic].Track) == 0) {
			ResultWait++;
			if (ResultWait > 5) {
				func_state = 5;
			}
		}
	}
}