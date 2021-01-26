#include "global.h"
#include "fingercheck.h"


int NotesSet() {
	for (int i = 0; i < MAXSCORE_NUM; i++) {
		switch (Notes[i].word) {
		case 'q':
			Notes[i].Lane = 0;
			Notes[i].Nots = NotsHandle[0];
			Notes[i].KeyCode = KEY_INPUT_Q;
			break;
		case 'a':
			Notes[i].Lane = 0;
			Notes[i].Nots = NotsHandle[10];
			Notes[i].KeyCode = KEY_INPUT_A;
			break;
		case 'z':
			Notes[i].Lane = 0;
			Notes[i].Nots = NotsHandle[19];
			Notes[i].KeyCode = KEY_INPUT_Z;
			break;
		case 'w':
			Notes[i].Lane = 1;
			Notes[i].Nots = NotsHandle[1];
			Notes[i].KeyCode = KEY_INPUT_W;
			break;
		case 's':
			Notes[i].Lane = 1;
			Notes[i].Nots = NotsHandle[11];
			Notes[i].KeyCode = KEY_INPUT_S;
			break;
		case 'x':
			Notes[i].Lane = 1;
			Notes[i].Nots = NotsHandle[20];
			Notes[i].KeyCode = KEY_INPUT_X;
			break;
		case 'e':
			Notes[i].Lane = 2;
			Notes[i].Nots = NotsHandle[2];
			Notes[i].KeyCode = KEY_INPUT_E;
			break;
		case 'd':
			Notes[i].Lane = 2;
			Notes[i].Nots = NotsHandle[12];
			Notes[i].KeyCode = KEY_INPUT_D;
			break;
		case 'c':
			Notes[i].Lane = 2;
			Notes[i].Nots = NotsHandle[21];
			Notes[i].KeyCode = KEY_INPUT_C;
			break;
		case 'r':
			Notes[i].Lane = 3;
			Notes[i].Nots = NotsHandle[3];
			Notes[i].KeyCode = KEY_INPUT_R;
			break;
		case 'f':
			Notes[i].Lane = 3;
			Notes[i].Nots = NotsHandle[13];
			Notes[i].KeyCode = KEY_INPUT_F;
			break;
		case 'v':
			Notes[i].Lane = 3;
			Notes[i].Nots = NotsHandle[22];
			Notes[i].KeyCode = KEY_INPUT_V;
			break;
		case 't':
			Notes[i].Lane = 3;
			Notes[i].Nots = NotsHandle[4];
			Notes[i].KeyCode = KEY_INPUT_T;
			break;
		case 'g':
			Notes[i].Lane = 3;
			Notes[i].Nots = NotsHandle[14];
			Notes[i].KeyCode = KEY_INPUT_G;
			break;
		case 'b':
			Notes[i].Lane = 3;
			Notes[i].Nots = NotsHandle[23];
			Notes[i].KeyCode = KEY_INPUT_B;
			break;
		case 'y':
			Notes[i].Lane = 6;
			Notes[i].Nots = NotsHandle[5];
			Notes[i].KeyCode = KEY_INPUT_Y;
			break;
		case 'h':
			Notes[i].Lane = 6;
			Notes[i].Nots = NotsHandle[15];
			Notes[i].KeyCode = KEY_INPUT_H;
			break;
		case 'n':
			Notes[i].Lane = 6;
			Notes[i].Nots = NotsHandle[24];
			Notes[i].KeyCode = KEY_INPUT_N;
			break;
		case 'u':
			Notes[i].Lane = 6;
			Notes[i].Nots = NotsHandle[6];
			Notes[i].KeyCode = KEY_INPUT_U;
			break;
		case 'j':
			Notes[i].Lane = 6;
			Notes[i].Nots = NotsHandle[16];
			Notes[i].KeyCode = KEY_INPUT_J;
			break;
		case 'm':
			Notes[i].Lane = 6;
			Notes[i].Nots = NotsHandle[25];
			Notes[i].KeyCode = KEY_INPUT_M;
			break;
		case 'i':
			Notes[i].Lane = 7;
			Notes[i].Nots = NotsHandle[7];
			Notes[i].KeyCode = KEY_INPUT_I;
			break;
		case 'k':
			Notes[i].Lane = 7;
			Notes[i].Nots = NotsHandle[17];
			Notes[i].KeyCode = KEY_INPUT_K;
			break;
		case 'o':
			Notes[i].Lane = 8;
			Notes[i].Nots = NotsHandle[8];
			Notes[i].KeyCode = KEY_INPUT_O;
			break;
		case 'l':
			Notes[i].Lane = 8;
			Notes[i].Nots = NotsHandle[18];
			Notes[i].KeyCode = KEY_INPUT_L;
			break;
		case 'p':
			Notes[i].Lane = 9;
			Notes[i].Nots = NotsHandle[9];
			Notes[i].KeyCode = KEY_INPUT_P;
			break;
		}
		NotesFlameSpeed = (int)(NOTES_DEFAULT_SPPED * NotesSpeed);
		NotesMoveFlame = 900 / NotesFlameSpeed;
		Notes[i].flam = (int)((Notes[i].time * 0.03) + 0.5);
		if (Notes[0].flam < NotesMoveFlame) {
			DelayFlame = NotesMoveFlame - Notes[0].flam;
		}
		Notes[i].Y = -217;
		Notes[i].flag = false;
		Notes[i].Angle = 0.0;
		Notes[i].Ext = 1.0;
		Notes[i].EffectMode = 0;
		Notes[i].EffectFlag = false;
		Notes[i].EffectFlam = 0;
		Notes[i].EffectPal = 255;
	}
	return 1;
}

void NotesFlagCheck() {
	for (int i = 0; i < NotesCount; i++) {
		if (Notes[i].flam + DelayFlame - NotesMoveFlame == FlameCount) {
			Notes[i].flag = true;
		}
	}
}



void NotesCheck() {

	for (int i = 0; i < NotesCount; i++) {
		if (Notes[i].flag == true) {
			if (CheckStateKey(Notes[i].KeyCode) == 1) {
				if (((Notes[i].flam + DelayFlame + 1) >= FlameCount) && ((Notes[i].flam + DelayFlame - 1) <= FlameCount)) {
					if (NotesFingerCheck(Notes[i].KeyCode)) {
						PerfectCount++;
						ScoreCheck();
						Notes[i].EffectMode = 1;
						Notes[i].EffectFlag = true;
						Notes[i].flag = false;
					}
				}
				else if (((Notes[i].flam + DelayFlame + 3) >= FlameCount) && ((Notes[i].flam + DelayFlame - 3) <= FlameCount)) {
					if (NotesFingerCheck(Notes[i].KeyCode)) {
						GreatCount++;
						ScoreCheck();
						Notes[i].EffectMode = 2;
						Notes[i].EffectFlag = true;
						Notes[i].flag = false;
					}
				}
				else if (((Notes[i].flam + DelayFlame + 7) >= FlameCount) && ((Notes[i].flam + DelayFlame - 7) <= FlameCount)) {
					if (NotesFingerCheck(Notes[i].KeyCode)) {
						GoodCount++;
						ScoreCheck();
						Notes[i].EffectMode = 3;
						Notes[i].EffectFlag = true;
						Notes[i].flag = false;
					}
				}
				else if (((Notes[i].flam + DelayFlame + 12) >= FlameCount) && ((Notes[i].flam + DelayFlame - 12) <= FlameCount) || NotesFingerCheck(Notes[i].KeyCode) != 1) {
					MissCount++;
					ScoreCheck();
					//printfDx("Miss\n");
					Notes[i].EffectMode = 4;
					Notes[i].EffectFlag = true;
					Notes[i].flag = false;
				}
			}

			else if ((Notes[i].flam + DelayFlame + 13) <= FlameCount) {
				MissCount++;
				//printfDx("Miss\n");
				Notes[i].flag = false;
			}
		}
	}
	MusicCheck();
	FlameCount++;
}

void NotesEffect() {
	for (int i = 0; i < NotesCount; i++) {
		if (Notes[i].EffectFlag) {
			switch (Notes[i].EffectMode) {
			case 1:
				Notes[i].Angle += 10.0;
				Notes[i].Ext += 0.2;
				Notes[i].EffectPal -= 42;
				Notes[i].EffectFlam += 1;
				SetDrawBlendMode(DX_BLENDMODE_ALPHA, Notes[i].EffectPal);
				GraphNots(i);
				SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
				if (Notes[i].EffectPal - 42 <= 0) {
					Notes[i].EffectFlag = false;
				}
				break;
			case 2:
				Notes[i].Ext += 0.1;
				Notes[i].EffectPal -= 42;
				Notes[i].EffectFlam += 1;
				SetDrawBlendMode(DX_BLENDMODE_ALPHA, Notes[i].EffectPal);
				GraphNots(i);
				SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
				if (Notes[i].EffectPal - 42 <= 0) {
					Notes[i].EffectFlag = false;
				}
				break;
			case 3:
				Notes[i].EffectPal -= 42;
				Notes[i].EffectFlam += 1;
				SetDrawBlendMode(DX_BLENDMODE_ALPHA, Notes[i].EffectPal);
				GraphNots(i);
				SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
				if (Notes[i].EffectPal - 42 <= 0) {
					Notes[i].EffectFlag = false;
				}
				break;
			case 4:
				Notes[i].Ext -= 0.1;
				Notes[i].EffectPal -= 42;
				Notes[i].EffectFlam += 1;
				SetDrawBlendMode(DX_BLENDMODE_ALPHA, Notes[i].EffectPal);
				GraphNots(i);
				SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
				if (Notes[i].EffectPal - 42 <= 0) {
					Notes[i].EffectFlag = false;
				}
				break;
			default:
				break;
			}
		}
		else if (Notes[i].flag) {
			SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 255);
			GraphNots(i);
		}
	}
}


