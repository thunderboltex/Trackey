#include "global.h"

int fingerdetect(int argc, char** argv) {
	// Leap Motion�̃R���g���[���[����уC�x���g���󂯎�郊�X�i�[�i�̃T�u�N���X�j���쐬����
	SampleListener listener;
	Controller controller;

	//HMD���[�h�ɐݒ�(��𗠕Ԃ��Ă��Ή�)
	controller.setPolicy(Leap::Controller::POLICY_OPTIMIZE_HMD);

	// �C�x���g���󂯎�郊�X�i�[��o�^����
	controller.addListener(listener);

	// �N�����̈�����"--bg"���ݒ肳��Ă����ꍇ��
	// �o�b�N�O���E���h���[�h(�A�v���P�[�V�������A�N�e�B�u�łȂ��ꍇ�ɂ��f�[�^���擾����)
	// �œ��삳����
	//if ( argc > 1 && strcmp(argv[1], "--bg") == 0 ) {
	controller.setPolicy(Leap::Controller::POLICY_BACKGROUND_FRAMES);//�o�b�N�O���E���h�œ���
  //}


	// �A�v���P�[�V�����̏I�����ɂ̓��X�i�[���폜����
	controller.removeListener(listener);

	return 0;
}
