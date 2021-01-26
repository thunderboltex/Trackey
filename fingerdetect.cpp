#include "global.h"

int fingerdetect(int argc, char** argv) {
	// Leap Motionのコントローラーおよびイベントを受け取るリスナー（のサブクラス）を作成する
	SampleListener listener;
	Controller controller;

	//HMDモードに設定(手を裏返しても対応)
	controller.setPolicy(Leap::Controller::POLICY_OPTIMIZE_HMD);

	// イベントを受け取るリスナーを登録する
	controller.addListener(listener);

	// 起動時の引数に"--bg"が設定されていた場合は
	// バックグラウンドモード(アプリケーションがアクティブでない場合にもデータを取得する)
	// で動作させる
	//if ( argc > 1 && strcmp(argv[1], "--bg") == 0 ) {
	controller.setPolicy(Leap::Controller::POLICY_BACKGROUND_FRAMES);//バックグラウンドで動く
  //}


	// アプリケーションの終了時にはリスナーを削除する
	controller.removeListener(listener);

	return 0;
}
