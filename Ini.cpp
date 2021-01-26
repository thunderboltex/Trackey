#include "global.h"

//ここにゲーム最初の初期化処理を書き込む
void Ini() {
	SetGraphMode(1366, 768, 16);
	BGMFlag[0] = true;
	MUSIC[0].flag = false;
	NotesSpeed = 1.0;	//NotesSppedはNotesのスピード係数　1.0がデフォ　最大2.0
	DelayFlame = 0;
	FlameCount = 0;
	ChoiceMusic = 0;
	Difficulty = 0;
	Font00 = CreateFontToHandle("HG正楷書体-PRO", 65, 30, DX_FONTTYPE_NORMAL);
	Font01 = CreateFontToHandle("メイリオ", 30, 3, DX_FONTTYPE_ANTIALIASING_EDGE);
	
	Font02 = CreateFontToHandle("メイリオ", 80, 5, DX_FONTTYPE_ANTIALIASING_EDGE); //メイリオのフォント
	Font03 = CreateFontToHandle("ＭＳ ゴシック", 140, 40, DX_FONTTYPE_NORMAL);               //MSゴシックのフォント
	Font04 = CreateFontToHandle("HG正楷書体-PRO", 180, 10, DX_FONTTYPE_NORMAL); //楷書体のフォント　大きい
	Font05 = CreateFontToHandle("HG正楷書体-PRO", 70, 10, DX_FONTTYPE_NORMAL); //楷書体のフォント　小さい

	TitleFont = CreateFontToHandle("メイリオ", 80, 5, DX_FONTTYPE_ANTIALIASING_EDGE);
	VolumeButton.X = 900;
	VolumeButton.Y = 140;
	SpeedButton.X = 850;
	SpeedButton.Y = 430;
	OptionVolume = 1;
	OptionSpeed = 1;
	Bright = 0;
	FeedOutFlag = false;
	 A = { 92, 0 };
	 S = { 75 , -16 };
	 D = { 48, -16.8 }; 
	 F = { 36.5, -15.9 }; 
	 J = { -22, -12 }; 
	 K = { -35.2, -18 };
	 L = { -60, -9.6 };
	 P = { -72, -21 };

	/*ホームポジションキー以外のキーのx,z座標*/
	 Q = { 95, -22 };
	 Z = { 89, 5.5 };
	 W = { 74, -24.7 };
	 X = { 70, -5 };
	 E = { 56, -20 };
	 C = { 50, -12 };
	 T = { 23.6, -25.1 };
	 G = { 15.7, -8.8 };
	 B = { 8.8, 7.6 };
	 R = { 42.5, -28.6 };
	 V = { 29.4, 6.3 };
	 Y = { 3.5, -20 };
	 H = { -4, -3 };
	 N = { -19, 10 };
	 U = { -14, -15.3 };
	 M = { -30, 5.1 };
	 I = { -32, -14 };
	 O = { -57, -9 };
	  
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
}


void GameIni() {
	for (int i = 0; i < MAXSCORE_NUM; i++) {
		Notes[i] = { 0,0,0,' ',0,0,0,0,0,false,0,0.0,0.0,0,0,false,0 };
	}
	PerfectCount = 0;
	GreatCount = 0;
	GoodCount = 0;
	MissCount = 0;
	FlameCount = 0;
	ResultTime = 0;
	ResultWait = 0;

}


/*  ↓↓手の検出に必要ぽい↓↓　*/
void SampleListener::onFrame(const Controller& controller) {
	const Frame frame = controller.frame();
	 HandList hands = frame.hands();
	 for (HandList::const_iterator hl = hands.begin(); hl != hands.end(); ++hl) {
		 // Get the first hand
		 const Hand hand = *hl;
		 const Vector normal = hand.palmNormal();
		 const Vector direction = hand.direction();
		 // Get fingers
		 const FingerList fingers = hand.fingers();


		 for (FingerList::const_iterator fl = fingers.begin(); fl != fingers.end(); ++fl) {
			 const Finger finger = *fl;


			 Bone::Type boneType = static_cast<Bone::Type>(3); //末節コツ
			 Bone bone = finger.bone(boneType);

			 FingerList fingers = hand.fingers();
			 if (hand.isLeft() == true) {
				 if (finger.type() == Leap::Finger::Type::TYPE_PINKY) {
					 LeftHand[0].x = finger.tipPosition().x;
					 LeftHand[0].z = finger.tipPosition().z;
				 }
				 else if (finger.type() == Leap::Finger::Type::TYPE_RING) {
					 LeftHand[1].x = finger.tipPosition().x;
					 LeftHand[1].z = finger.tipPosition().z;
				 }
				 else if (finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {
					 LeftHand[2].x = finger.tipPosition().x;
					 LeftHand[2].z = finger.tipPosition().z;
				 }
				 else if (finger.type() == Leap::Finger::Type::TYPE_INDEX) {
					 LeftHand[3].x = finger.tipPosition().x;
					 LeftHand[3].z = finger.tipPosition().z;
				 }
			 }else  if (hand.isRight() == true) {
				 if (finger.type() == Leap::Finger::Type::TYPE_PINKY) {
					 RightHand[0].x = finger.tipPosition().x;
					 RightHand[0].z = finger.tipPosition().z;
				 }
				 else if (finger.type() == Leap::Finger::Type::TYPE_RING) {
					 RightHand[1].x = finger.tipPosition().x;
					 RightHand[1].z = finger.tipPosition().z;
				 }
				 else if (finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {
					 RightHand[2].x = finger.tipPosition().x;
					 RightHand[2].z = finger.tipPosition().z;
				 }
				 else if (finger.type() == Leap::Finger::Type::TYPE_INDEX) {
					 RightHand[3].x = finger.tipPosition().x;
					 RightHand[3].z = finger.tipPosition().z;
				 }
			 }
		 }
	 }

}

//この実行ウインドウがアクティブなとき
void SampleListener::onFocusGained(const Controller& controller) {
	std::cout << "Focus Gained" << std::endl;
}

//この実行ウインドウがアクティブでないとき
void SampleListener::onFocusLost(const Controller& controller) {
	std::cout << "Focus Lost" << std::endl;
}

//ウインドウがアクティブかアクティブでないかに変化したときに表示
void SampleListener::onDeviceChange(const Controller& controller) {
	std::cout << "Device Changed" << std::endl;
	const DeviceList devices = controller.devices();
	//リアルタイムでデータを取得
	for (int i = 0; i < devices.count(); ++i) {
		std::cout << "id: " << devices[i].toString() << std::endl;
		std::cout << "  isStreaming: " << (devices[i].isStreaming() ? "true" : "false") << std::endl;
	}
}

//Leap Motionのデータを取得しているWindowsサービスとの接続／切断が通知
void SampleListener::onServiceConnect(const Controller& controller) {
	std::cout << "Service Connected" << std::endl;
}

void SampleListener::onServiceDisconnect(const Controller& controller) {
	std::cout << "Service Disconnected" << std::endl;
}