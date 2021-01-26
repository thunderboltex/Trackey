#include "global.h"

//Key入力を管理する配列
unsigned int stateKey[256];

//全キーの入力状態を配列に格納
int GetHitKeyStateAll_2() {
	char GetHitKeyStateAll_Key[256];
	GetHitKeyStateAll(GetHitKeyStateAll_Key);
	for (int i = 0; i < 256; i++) {
		if (GetHitKeyStateAll_Key[i] == 1)stateKey[i]++;
		else stateKey[i] = 0;
	}
	return 0;
}

//特定のキーの入力状態を取得
int CheckStateKey(unsigned char Handle) {
	return stateKey[Handle];
}
