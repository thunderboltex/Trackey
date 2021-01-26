#define GLOBAL_INSTANCE
#include "global.h"

//���[�v�ŕK���s���R�又��
int ProcessLoop() {
	if (ProcessMessage() != 0)return -1;//�v���Z�X�������G���[�Ȃ�-1��Ԃ�
	if (ClearDrawScreen() != 0)return -1;//��ʃN���A�������G���[�Ȃ�-1��Ԃ�
	GetHitKeyStateAll_2();//���݂̃L�[���͏������s��
	return 0;
}

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1 || SetDrawScreen(DX_SCREEN_BACK) != 0) return -1;//�������Ɨ���ʉ�
	MusicIni();
	while (ProcessLoop() == 0) {//���C�����[�v

		switch (func_state) {
		case 0:
			Ini();
			LoadMain();
			func_state = 1;
			break;
		//�X�^�[�g���
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
			//�ȑI�����
			printfDx("�s����func_state\n");
			break;
		}
		MusicMain();
		FPSWait();
		if (CheckStateKey(KEY_INPUT_ESCAPE) == 1)break;
		ScreenFlip();
	}
	 // �A�v���P�[�V�����̏I�����ɂ̓��X�i�[���폜����
	controller.removeListener(listener);
	DxLib_End();
	return 0;				// �\�t�g�̏I�� 
}