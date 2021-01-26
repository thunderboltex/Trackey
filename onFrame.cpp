#include "global.h"
#include "onFrame.h"
using namespace Leap;


/*  ↓↓手の検出に必要ぽい↓↓　*/
void SampleListener::onFrame(const Controller& controller) {
	// Get the most recent frame and report some basic information最新のフレームを入手していくつかの基本情報を報告する
	const Frame frame = controller.frame();

	//bool NotesFingerCheck (int KEYCODE) {
		//Controller controller;
		//const Frame frame = controller.frame();

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


			//if (KEYCODE == 16) {  //Qが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //左手かつ小指
			//		//小指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= Q.x + 9) && (finger.tipPosition().x >= Q.x - 9)) && ((finger.tipPosition().z <= Q.z + 9) && (finger.tipPosition().z >= Q.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (KEYCODE == 30) {  //Aが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //左手かつ小指
			//		//小指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= A.x + 15) && (finger.tipPosition().x >= A.x - 15)) && ((finger.tipPosition().z <= A.z + 15) && (finger.tipPosition().z >= A.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('Z')) {  //Zが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //左手かつ小指
			//		//小指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= Z.x + 9) && (finger.tipPosition().x >= Z.x - 9)) && ((finger.tipPosition().z <= Z.z + 9) && (finger.tipPosition().z >= Z.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('W')) {  //Wが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //左手かつ薬指
			//		//薬指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= W.x + 13) && (finger.tipPosition().x >= W.x - 9)) && ((finger.tipPosition().z <= W.z + 12) && (finger.tipPosition().z >= W.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('X')) {  //Xが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //左手かつ薬指
			//		//薬指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= X.x + 9) && (finger.tipPosition().x >= X.x - 9)) && ((finger.tipPosition().z <= X.z + 9) && (finger.tipPosition().z >= X.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('S')) {  //Sが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //左手かつ薬指
			//		//薬指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= S.x + 15) && (finger.tipPosition().x >= S.x - 15)) && ((finger.tipPosition().z <= S.z + 20) && (finger.tipPosition().z >= S.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('E')) {  //Eが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //左手かつ中指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= E.x + 13) && (finger.tipPosition().x >= E.x - 15)) && ((finger.tipPosition().z <= E.z + 9) && (finger.tipPosition().z >= E.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('C')) {  //Cが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //左手かつ中指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= C.x + 25) && (finger.tipPosition().x >= C.x - 9)) && ((finger.tipPosition().z <= C.z + 20) && (finger.tipPosition().z >= C.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('D')) {  //Dが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //左手かつ中指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= D.x + 15) && (finger.tipPosition().x >= D.x - 10)) && ((finger.tipPosition().z <= D.z + 15) && (finger.tipPosition().z >= D.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('R')) {  //Rが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //左手かつ人指し指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= R.x + 9) && (finger.tipPosition().x >= R.x - 13)) && ((finger.tipPosition().z <= R.z + 9) && (finger.tipPosition().z >= R.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('V')) {  //Vが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //左手かつ人指し指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= V.x + 13) && (finger.tipPosition().x >= V.x - 13)) && ((finger.tipPosition().z <= V.z + 9) && (finger.tipPosition().z >= V.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('F')) {  //Fが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //左手かつ人指し指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= F.x + 9) && (finger.tipPosition().x >= F.x - 17)) && ((finger.tipPosition().z <= F.z + 9) && (finger.tipPosition().z >= F.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('T')) {  //Tが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //左手かつ人指し指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= T.x + 9) && (finger.tipPosition().x >= T.x - 9)) && ((finger.tipPosition().z <= T.z + 9) && (finger.tipPosition().z >= T.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('G')) {  //Gが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //左手かつ人指し指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= G.x + 9) && (finger.tipPosition().x >= G.x - 9)) && ((finger.tipPosition().z <= G.z + 9) && (finger.tipPosition().z >= G.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('B')) {  //Bが押されたとき
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //左手かつ人指し指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= B.x + 9) && (finger.tipPosition().x >= B.x - 9)) && ((finger.tipPosition().z <= B.z + 9) && (finger.tipPosition().z >= B.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}

			///*　ここから右手　*/
			//if (GetAsyncKeyState('N')) {  //Nが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //右手かつ人差し指
			//		//ひとさし指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= N.x + 16) && (finger.tipPosition().x >= N.x - 9)) && ((finger.tipPosition().z <= N.z + 9) && (finger.tipPosition().z >= N.z - 13))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('Y')) {  //Yが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //右手かつ人差し指
			//		//ひとさし指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= Y.x + 9) && (finger.tipPosition().x >= Y.x - 9)) && ((finger.tipPosition().z <= Y.z + 9) && (finger.tipPosition().z >= Y.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('U')) {  //Uが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //右手かつ人差し指
			//		//ひとさし指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= U.x + 13) && (finger.tipPosition().x >= U.x - 13)) && ((finger.tipPosition().z <= U.z + 9) && (finger.tipPosition().z >= U.z - 13))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('H')) {  //Hが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //右手かつ人差し指
			//		//ひとさし指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= H.x + 9) && (finger.tipPosition().x >= H.x - 9)) && ((finger.tipPosition().z <= H.z + 13) && (finger.tipPosition().z >= H.z - 13))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('M')) {  //Mが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //右手かつ人差し指
			//		//ひとさし指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= M.x + 15) && (finger.tipPosition().x >= M.x - 13)) && ((finger.tipPosition().z <= M.z + 9) && (finger.tipPosition().z >= M.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('J')) {  //Jが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //右手かつ人差し指
			//		//ひとさし指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= J.x + 9) && (finger.tipPosition().x >= J.x - 9)) && ((finger.tipPosition().z <= J.z + 9) && (finger.tipPosition().z >= J.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('I')) {  //Iが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //右手かつ中指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= I.x + 9) && (finger.tipPosition().x >= I.x - 16)) && ((finger.tipPosition().z <= I.z + 11) && (finger.tipPosition().z >= I.z - 11))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('K')) {  //Kが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //右手かつ中指
			//		//中指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= K.x + 9) && (finger.tipPosition().x >= K.x - 15)) && ((finger.tipPosition().z <= K.z + 9) && (finger.tipPosition().z >= K.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('O')) {  //Oが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //右手かつ薬指
			//		//薬指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= O.x + 16) && (finger.tipPosition().x >= O.x - 10)) && ((finger.tipPosition().z <= O.z + 9) && (finger.tipPosition().z >= O.z - 20))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('L')) {  //Lが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //右手かつ薬指
			//		//薬指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= L.x + 15) && (finger.tipPosition().x >= L.x - 15)) && ((finger.tipPosition().z <= L.z + 9) && (finger.tipPosition().z >= L.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('P')) {  //Pが押されたとき
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //右手かつ小指
			//		//小指の指先が指定範囲内の位置であればOK
			//		if (((finger.tipPosition().x <= P.x + 13) && (finger.tipPosition().x >= P.x - 9)) && ((finger.tipPosition().z <= P.z + 9) && (finger.tipPosition().z >= P.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}

		}
	}

}