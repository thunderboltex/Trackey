#include "global.h"

//Key���͂��Ǘ�����z��
unsigned int stateKey[256];

//�S�L�[�̓��͏�Ԃ�z��Ɋi�[
int GetHitKeyStateAll_2() {
	char GetHitKeyStateAll_Key[256];
	GetHitKeyStateAll(GetHitKeyStateAll_Key);
	for (int i = 0; i < 256; i++) {
		if (GetHitKeyStateAll_Key[i] == 1)stateKey[i]++;
		else stateKey[i] = 0;
	}
	return 0;
}

//����̃L�[�̓��͏�Ԃ��擾
int CheckStateKey(unsigned char Handle) {
	return stateKey[Handle];
}
