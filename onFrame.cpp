#include "global.h"
#include "onFrame.h"
using namespace Leap;


/*  ������̌��o�ɕK�v�ۂ������@*/
void SampleListener::onFrame(const Controller& controller) {
	// Get the most recent frame and report some basic information�ŐV�̃t���[������肵�Ă������̊�{����񍐂���
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


			Bone::Type boneType = static_cast<Bone::Type>(3); //���߃R�c
			Bone bone = finger.bone(boneType);

			FingerList fingers = hand.fingers();


			//if (KEYCODE == 16) {  //Q�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //���肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= Q.x + 9) && (finger.tipPosition().x >= Q.x - 9)) && ((finger.tipPosition().z <= Q.z + 9) && (finger.tipPosition().z >= Q.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (KEYCODE == 30) {  //A�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //���肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= A.x + 15) && (finger.tipPosition().x >= A.x - 15)) && ((finger.tipPosition().z <= A.z + 15) && (finger.tipPosition().z >= A.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('Z')) {  //Z�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //���肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= Z.x + 9) && (finger.tipPosition().x >= Z.x - 9)) && ((finger.tipPosition().z <= Z.z + 9) && (finger.tipPosition().z >= Z.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('W')) {  //W�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //���肩��w
			//		//��w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= W.x + 13) && (finger.tipPosition().x >= W.x - 9)) && ((finger.tipPosition().z <= W.z + 12) && (finger.tipPosition().z >= W.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('X')) {  //X�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //���肩��w
			//		//��w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= X.x + 9) && (finger.tipPosition().x >= X.x - 9)) && ((finger.tipPosition().z <= X.z + 9) && (finger.tipPosition().z >= X.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('S')) {  //S�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //���肩��w
			//		//��w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= S.x + 15) && (finger.tipPosition().x >= S.x - 15)) && ((finger.tipPosition().z <= S.z + 20) && (finger.tipPosition().z >= S.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('E')) {  //E�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //���肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= E.x + 13) && (finger.tipPosition().x >= E.x - 15)) && ((finger.tipPosition().z <= E.z + 9) && (finger.tipPosition().z >= E.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('C')) {  //C�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //���肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= C.x + 25) && (finger.tipPosition().x >= C.x - 9)) && ((finger.tipPosition().z <= C.z + 20) && (finger.tipPosition().z >= C.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('D')) {  //D�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //���肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= D.x + 15) && (finger.tipPosition().x >= D.x - 10)) && ((finger.tipPosition().z <= D.z + 15) && (finger.tipPosition().z >= D.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('R')) {  //R�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //���肩�l�w���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= R.x + 9) && (finger.tipPosition().x >= R.x - 13)) && ((finger.tipPosition().z <= R.z + 9) && (finger.tipPosition().z >= R.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('V')) {  //V�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //���肩�l�w���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= V.x + 13) && (finger.tipPosition().x >= V.x - 13)) && ((finger.tipPosition().z <= V.z + 9) && (finger.tipPosition().z >= V.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('F')) {  //F�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //���肩�l�w���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= F.x + 9) && (finger.tipPosition().x >= F.x - 17)) && ((finger.tipPosition().z <= F.z + 9) && (finger.tipPosition().z >= F.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('T')) {  //T�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //���肩�l�w���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= T.x + 9) && (finger.tipPosition().x >= T.x - 9)) && ((finger.tipPosition().z <= T.z + 9) && (finger.tipPosition().z >= T.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('G')) {  //G�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //���肩�l�w���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= G.x + 9) && (finger.tipPosition().x >= G.x - 9)) && ((finger.tipPosition().z <= G.z + 9) && (finger.tipPosition().z >= G.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('B')) {  //B�������ꂽ�Ƃ�
			//	if (hand.isLeft() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //���肩�l�w���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= B.x + 9) && (finger.tipPosition().x >= B.x - 9)) && ((finger.tipPosition().z <= B.z + 9) && (finger.tipPosition().z >= B.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}

			///*�@��������E��@*/
			//if (GetAsyncKeyState('N')) {  //N�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //�E�肩�l�����w
			//		//�ЂƂ����w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= N.x + 16) && (finger.tipPosition().x >= N.x - 9)) && ((finger.tipPosition().z <= N.z + 9) && (finger.tipPosition().z >= N.z - 13))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('Y')) {  //Y�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //�E�肩�l�����w
			//		//�ЂƂ����w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= Y.x + 9) && (finger.tipPosition().x >= Y.x - 9)) && ((finger.tipPosition().z <= Y.z + 9) && (finger.tipPosition().z >= Y.z - 15))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('U')) {  //U�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //�E�肩�l�����w
			//		//�ЂƂ����w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= U.x + 13) && (finger.tipPosition().x >= U.x - 13)) && ((finger.tipPosition().z <= U.z + 9) && (finger.tipPosition().z >= U.z - 13))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('H')) {  //H�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //�E�肩�l�����w
			//		//�ЂƂ����w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= H.x + 9) && (finger.tipPosition().x >= H.x - 9)) && ((finger.tipPosition().z <= H.z + 13) && (finger.tipPosition().z >= H.z - 13))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('M')) {  //M�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //�E�肩�l�����w
			//		//�ЂƂ����w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= M.x + 15) && (finger.tipPosition().x >= M.x - 13)) && ((finger.tipPosition().z <= M.z + 9) && (finger.tipPosition().z >= M.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('J')) {  //J�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_INDEX) {  //�E�肩�l�����w
			//		//�ЂƂ����w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= J.x + 9) && (finger.tipPosition().x >= J.x - 9)) && ((finger.tipPosition().z <= J.z + 9) && (finger.tipPosition().z >= J.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('I')) {  //I�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //�E�肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= I.x + 9) && (finger.tipPosition().x >= I.x - 16)) && ((finger.tipPosition().z <= I.z + 11) && (finger.tipPosition().z >= I.z - 11))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('K')) {  //K�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_MIDDLE) {  //�E�肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= K.x + 9) && (finger.tipPosition().x >= K.x - 15)) && ((finger.tipPosition().z <= K.z + 9) && (finger.tipPosition().z >= K.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('O')) {  //O�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //�E�肩��w
			//		//��w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= O.x + 16) && (finger.tipPosition().x >= O.x - 10)) && ((finger.tipPosition().z <= O.z + 9) && (finger.tipPosition().z >= O.z - 20))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('L')) {  //L�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_RING) {  //�E�肩��w
			//		//��w�̎w�悪�w��͈͓��̈ʒu�ł����OK
			//		if (((finger.tipPosition().x <= L.x + 15) && (finger.tipPosition().x >= L.x - 15)) && ((finger.tipPosition().z <= L.z + 9) && (finger.tipPosition().z >= L.z - 9))) {
			//			return true;
			//		}
			//		else {
			//			return false;
			//		}
			//	}
			//}
			//if (GetAsyncKeyState('P')) {  //P�������ꂽ�Ƃ�
			//	if (hand.isRight() == true && finger.type() == Leap::Finger::Type::TYPE_PINKY) {  //�E�肩���w
			//		//���w�̎w�悪�w��͈͓��̈ʒu�ł����OK
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