#include "global.h"

//fpsのカウンタ，60フレームカウントの基準になる0フレーム目の時刻
int fps_count, count0;
//平均計算用の配列
int frame[FLAME];
//平均FPS
double ave_fps;

//FLAME fps になるようにfpsを計算・制御
void FPSWait() {
	int term, i, gnt;
	static int t = 0;
	if (fps_count == 0) {//60フレームの1回目
		if (t == 0)//完全に最初ならまたない
			term = 0;
		else//前回記録した時間を元に計算
			term = count0 + 1000 - GetNowCount();
	}
	else//待つべき時間＝現在あるべき時刻-現在の時刻
		term = (int)(count0 + fps_count*(1000.0 / FLAME)) - GetNowCount();

	if (term > 0)//待つべき時間だけ待つ
		Sleep(term);

	gnt = GetNowCount();

	if (fps_count == 0) //60フレーム意に1度基準を作る
		count0 = gnt;
	frame[fps_count] = gnt - t;
	t = gnt;
	//平均計算
	if (fps_count == FLAME - 1) {
		ave_fps = 0;
		for (i = 0; i < FLAME; i++)
			ave_fps += frame[i];
		ave_fps /= FLAME;
	}
	fps_count = (++fps_count) % FLAME;
}

//x,yの位置にfpsを表示
void DrawFPS(int x,int y) {
	if (ave_fps != 0) {
		DrawFormatString(x, y, GetColor(255,255,255),"[%.1f]", 1000 / ave_fps);
	}
	return;
}