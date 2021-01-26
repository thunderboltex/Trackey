#define GLOBAL_INSTANCE
#include "global.h"

//ループで必ず行う３大処理
int ProcessLoop() {
	if (ProcessMessage() != 0)return -1;//プロセス処理がエラーなら-1を返す
	if (ClearDrawScreen() != 0)return -1;//画面クリア処理がエラーなら-1を返す
	GetHitKeyStateAll_2();//現在のキー入力処理を行う
	return 0;
}

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1 || SetDrawScreen(DX_SCREEN_BACK) != 0) return -1;//初期化と裏画面化
	MusicIni();
	while (ProcessLoop() == 0) {//メインループ

		switch (func_state) {
		case 0:
			Ini();
			LoadMain();
			func_state = 1;
			break;
		//スタート画面
		case 1:
			GraphMenuMain();
			MenuMain();
			break;
		case 10:
			OptionMain();
			GraphOptionMain();
			break;
		case 2:
			GraphChoiceMain();
			ChoiceMain();
			break;
		case 3:
			if (NotesSet() == 1) {
				MusicStop();
				func_state = 4;
			}
			break;
		case 4:
			GameMain(); 
			break;
		case 5:
			ResultMain();
			GraphResultMain();
			break;
		default:
			//曲選択画面
			printfDx("不明なfunc_state\n");
			break;
		}
		MusicMain();
		FPSWait();
		if (CheckStateKey(KEY_INPUT_ESCAPE) == 1)break;
		ScreenFlip();
	}
	 // アプリケーションの終了時にはリスナーを削除する
	controller.removeListener(listener);
	DxLib_End();
	return 0;				// ソフトの終了 
}