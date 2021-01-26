#include "global.h"

void ScoreCheck() {
	Score = PerfectCount * PERFECT + GreatCount * GREAT + GoodCount * GOOD + MissCount * MISS; //スコア計算
	LoA = (float)Score / (NotesCount * PERFECT) * 100; //達成度(％)計算
}

void ResultMain() {
	ScoreCheck();
	/*　　　　　Enterを押すとタイトル画面に　　　　*/
	if (ResultTime > 180) {
		if (CheckStateKey(KEY_INPUT_RETURN) == 1) {
			SEFlag[1] = true;
			func_state = 2;
		}
	}
	ResultTime++;
}