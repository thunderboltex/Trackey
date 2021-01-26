#include "global.h"
#include "fingercheck.h"

bool NotesFingerCheck(int KEYCODE) {
	//printfDx("handID : %d\n", hand.id());
	//printfDx("Do\n");
	if (GetAsyncKeyState('Q')) {  //Qが押されたとき
			//小指の指先が指定範囲内の位置であればOK
			if (((LeftHand[0].x <= Q.x + 9) && (LeftHand[0].x >= Q.x - 9)) && ((LeftHand[0].z <= Q.z + 9) && (LeftHand[0].z >= Q.z - 9))) {
				return true;
			}
			else {
				return false;
			}
		
	}
	if (GetAsyncKeyState('A')) {  //Aが押されたとき
			//小指の指先が指定範囲内の位置であればOK
			if (((LeftHand[0].x <= A.x + 15) && (LeftHand[0].x >= A.x - 15)) && ((LeftHand[0].z <= A.z + 15) && (LeftHand[0].z >= A.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('Z')) {  //Zが押されたとき
			//小指の指先が指定範囲内の位置であればOK
			if (((LeftHand[0].x <= Z.x + 9) && (LeftHand[0].x >= Z.x - 9)) && ((LeftHand[0].z <= Z.z + 9) && (LeftHand[0].z >= Z.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('W')) {  //Wが押されたとき
			//薬指の指先が指定範囲内の位置であればOK
			if (((LeftHand[1].x <= W.x + 13) && (LeftHand[1].x >= W.x - 9)) && ((LeftHand[1].z <= W.z + 12) && (LeftHand[1].z >= W.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('X')) {  //Xが押されたとき
			//薬指の指先が指定範囲内の位置であればOK
			if (((LeftHand[1].x <= X.x + 9) && (LeftHand[1].x >= X.x - 9)) && ((LeftHand[1].z <= X.z + 9) && (LeftHand[1].z >= X.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('S')) {  //Sが押されたとき
			//薬指の指先が指定範囲内の位置であればOK
			if (((LeftHand[1].x <= S.x + 15) && (LeftHand[1].x >= S.x - 15)) && ((LeftHand[1].z <= S.z + 20) && (LeftHand[1].z >= S.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('E')) {  //Eが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[2].x <= E.x + 13) && (LeftHand[2].x >= E.x - 15)) && ((LeftHand[2].z <= E.z + 9) && (LeftHand[2].z >= E.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('C')) {  //Cが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[2].x <= C.x + 25) && (LeftHand[2].x >= C.x - 9)) && ((LeftHand[2].z <= C.z + 20) && (LeftHand[2].z >= C.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('D')) {  //Dが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[2].x <= D.x + 15) && (LeftHand[2].x >= D.x - 10)) && ((LeftHand[2].z <= D.z + 15) && (LeftHand[2].z >= D.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('R')) {  //Rが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[3].x <= R.x + 9) && (LeftHand[3].x >= R.x - 13)) && ((LeftHand[3].z <= R.z + 9) && (LeftHand[3].z >= R.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('V')) {  //Vが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[3].x <= V.x + 13) && (LeftHand[3].x >= V.x - 13)) && ((LeftHand[3].z <= V.z + 9) && (LeftHand[3].z >= V.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('F')) {  //Fが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[3].x <= F.x + 9) && (LeftHand[3].x >= F.x - 17)) && ((LeftHand[3].z <= F.z + 9) && (LeftHand[3].z >= F.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('T')) {  //Tが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[3].x <= T.x + 9) && (LeftHand[3].x >= T.x - 9)) && ((LeftHand[3].z <= T.z + 9) && (LeftHand[3].z >= T.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('G')) {  //Gが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[3].x <= G.x + 9) && (LeftHand[3].x >= G.x - 9)) && ((LeftHand[3].z <= G.z + 9) && (LeftHand[3].z >= G.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('B')) {  //Bが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((LeftHand[3].x <= B.x + 9) && (LeftHand[3].x >= B.x - 9)) && ((LeftHand[3].z <= B.z + 9) && (LeftHand[3].z >= B.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}

	/*　ここから右手　*/
	if (GetAsyncKeyState('N')) {  //Nが押されたとき
			//ひとさし指の指先が指定範囲内の位置であればOK
			if (((RightHand[3].x <= N.x + 16) && (RightHand[3].x >= N.x - 9)) && ((RightHand[3].z <= N.z + 9) && (RightHand[3].z >= N.z - 13))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('Y')) {  //Yが押されたとき
			//ひとさし指の指先が指定範囲内の位置であればOK
			if (((RightHand[3].x <= Y.x + 9) && (RightHand[3].x >= Y.x - 9)) && ((RightHand[3].z <= Y.z + 9) && (RightHand[3].z >= Y.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('U')) {  //Uが押されたとき
			//ひとさし指の指先が指定範囲内の位置であればOK
			if (((RightHand[3].x <= U.x + 13) && (RightHand[3].x >= U.x - 13)) && ((RightHand[3].z <= U.z + 9) && (RightHand[3].z >= U.z - 13))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('H')) {  //Hが押されたとき
			//ひとさし指の指先が指定範囲内の位置であればOK
			if (((RightHand[3].x <= H.x + 9) && (RightHand[3].x >= H.x - 9)) && ((RightHand[3].z <= H.z + 13) && (RightHand[3].z >= H.z - 13))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('M')) {  //Mが押されたとき
			//ひとさし指の指先が指定範囲内の位置であればOK
			if (((RightHand[3].x <= M.x + 15) && (RightHand[3].x >= M.x - 13)) && ((RightHand[3].z <= M.z + 9) && (RightHand[3].z >= M.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('J')) {  //Jが押されたとき
			//ひとさし指の指先が指定範囲内の位置であればOK
			if (((RightHand[3].x <= J.x + 9) && (RightHand[3].x >= J.x - 9)) && ((RightHand[3].z <= J.z + 9) && (RightHand[3].z >= J.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('I')) {  //Iが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((RightHand[2].x <= I.x + 9) && (RightHand[2].x >= I.x - 16)) && ((RightHand[2].z <= I.z + 11) && (RightHand[2].z >= I.z - 11))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('K')) {  //Kが押されたとき
			//中指の指先が指定範囲内の位置であればOK
			if (((RightHand[2].x <= K.x + 9) && (RightHand[2].x >= K.x - 15)) && ((RightHand[2].z <= K.z + 9) && (RightHand[2].z >= K.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('O')) {  //Oが押されたとき
			//薬指の指先が指定範囲内の位置であればOK
			if (((RightHand[1].x <= O.x + 16) && (RightHand[1].x >= O.x - 10)) && ((RightHand[1].z <= O.z + 9) && (RightHand[1].z >= O.z - 20))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('L')) {  //Lが押されたとき
			//薬指の指先が指定範囲内の位置であればOK
			if (((RightHand[1].x <= L.x + 15) && (RightHand[1].x >= L.x - 15)) && ((RightHand[1].z <= L.z + 9) && (RightHand[1].z >= L.z - 9))) {
				return true;
			}
			else {
				return false;
			}
	}
	if (GetAsyncKeyState('P')) {  //Pが押されたとき
			//小指の指先が指定範囲内の位置であればOK
			if (((RightHand[0].x <= P.x + 13) && (RightHand[0].x >= P.x - 9)) && ((RightHand[0].z <= P.z + 9) && (RightHand[0].z >= P.z - 15))) {
				return true;
			}
			else {
				return false;
			}
	}
}
	
