#include "global.h"

void ScoreCheck() {
	Score = PerfectCount * PERFECT + GreatCount * GREAT + GoodCount * GOOD + MissCount * MISS; //�X�R�A�v�Z
	LoA = (float)Score / (NotesCount * PERFECT) * 100; //�B���x(��)�v�Z
}

void ResultMain() {
	ScoreCheck();
	/*�@�@�@�@�@Enter�������ƃ^�C�g����ʂɁ@�@�@�@*/
	if (ResultTime > 180) {
		if (CheckStateKey(KEY_INPUT_RETURN) == 1) {
			SEFlag[1] = true;
			func_state = 2;
		}
	}
	ResultTime++;
}