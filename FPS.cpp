#include "global.h"

//fps�̃J�E���^�C60�t���[���J�E���g�̊�ɂȂ�0�t���[���ڂ̎���
int fps_count, count0;
//���όv�Z�p�̔z��
int frame[FLAME];
//����FPS
double ave_fps;

//FLAME fps �ɂȂ�悤��fps���v�Z�E����
void FPSWait() {
	int term, i, gnt;
	static int t = 0;
	if (fps_count == 0) {//60�t���[����1���
		if (t == 0)//���S�ɍŏ��Ȃ�܂��Ȃ�
			term = 0;
		else//�O��L�^�������Ԃ����Ɍv�Z
			term = count0 + 1000 - GetNowCount();
	}
	else//�҂ׂ����ԁ����݂���ׂ�����-���݂̎���
		term = (int)(count0 + fps_count*(1000.0 / FLAME)) - GetNowCount();

	if (term > 0)//�҂ׂ����Ԃ����҂�
		Sleep(term);

	gnt = GetNowCount();

	if (fps_count == 0) //60�t���[���ӂ�1�x������
		count0 = gnt;
	frame[fps_count] = gnt - t;
	t = gnt;
	//���όv�Z
	if (fps_count == FLAME - 1) {
		ave_fps = 0;
		for (i = 0; i < FLAME; i++)
			ave_fps += frame[i];
		ave_fps /= FLAME;
	}
	fps_count = (++fps_count) % FLAME;
}

//x,y�̈ʒu��fps��\��
void DrawFPS(int x,int y) {
	if (ave_fps != 0) {
		DrawFormatString(x, y, GetColor(255,255,255),"[%.1f]", 1000 / ave_fps);
	}
	return;
}