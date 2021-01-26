#include "global.h"

//�摜�C�������̃f�[�^�̃��[�h�֐����܂Ƃ߂�
void LoadMain() {
	//Start��ʂ̔w�i�摜�ǂݍ���
	MenuBack = LoadGraph("Material/Graph/game_back_sample.png");
	MenuArrow = LoadGraph("Material/Graph/���.png");
	//Option��ʂ̉摜�ǂݍ���
	OptionBack = LoadGraph("Material/Graph/game_back_sample.png");
	OptionArrow = LoadGraph("Material/Graph/���.png");
	OptionSlidebar = LoadGraph("Material/Graph/�X���C�h�o�[.png");
	OptionSlidebutton = LoadGraph("Material/Graph/�{�^��.png");
	//Game��ʂ̔w�i�摜�ǂݍ���
	GameMainBack = LoadGraph("Material/Graph/game_back_sample.png");
	GameRightBack = LoadGraph("Material/Graph/game_right_sample.png");
	GameLeftBack = LoadGraph("Material/Graph/game_left_sample.png");
	GameBarBack = LoadGraph("Material/Graph/game_bar.png");
	GameWordBack = LoadGraph("Material/Graph/game_word_sample.png");
	GameLaneBack = LoadGraph("Material/Graph/game_lane.png");
	//SE�ǂݍ���
	SE[0] = LoadSoundMem("Material/BGMSE/�{�^��.mp3");
	SE[1] = LoadSoundMem("material/BGMSE/����.mp3");
	//BGM�ǂݍ���
	BGM[0] = LoadSoundMem("Material/BGMSE/bgm_maoudamashii_cyber42.mp3");
	MUSIC[0].Track = LoadSoundMem("Material/BGMSE/bgm_maoudamashii_piano11.mp3");
	MUSIC[1].Track = LoadSoundMem("Material/BGMSE/Cat_life.mp3");
	MUSIC[2].Track = LoadSoundMem("Material/BGMSE/Morning_3.mp3");
	MUSIC[0].Jacket = LoadGraph("Material/Graph/�T���v��1.jpg");
	MUSIC[1].Jacket = LoadGraph("Material/Graph/�T���v��2.jpg");
	MUSIC[2].Jacket = LoadGraph("Material/Graph/�T���v��3.jpg");
	MUSIC[3].Jacket = LoadGraph("Material/Graph/�T���v��4.jpg");
	MUSIC[4].Jacket = LoadGraph("Material/Graph/�T���v��5.jpg");
	//NOTS�ǂݍ���
	LoadDivGraph("Material/Graph/nots_sample.png", 26, 7, 4, 84, 84, NotsHandle);
	//�����t�@�C���̓ǂݍ���
	LoadDictionary();
	//Choice���
	LArrow = LoadGraph("Material/Graph/�����.png");
	RArrow = LoadGraph("Material/Graph/�E���.png");
	DiffArrow = LoadGraph("Material/Graph/���.png");

	for (int i = 0; i < SE_MAX; i++) {
		ChangeVolumeSoundMem(255 * 33 * 2 / 100, SE[i]);
	}
	for (int i = 0; i < BGM_MAX; i++) {
		ChangeVolumeSoundMem(255 * 33 * 2 / 100, BGM[i]);
	}
	for (int i = 0; i < MUSIC_MAX; i++) {
		ChangeVolumeSoundMem(255 * 33 * 2 / 100, MUSIC[i].Track);
	}
}

int LoadScore() {
	int score[10][3], i, n, num;
	int input[64];
	char inputc[64];
	int rand_num = rand() % LOAD_NUM_MAX;
	char score0_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score0_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score0_H[64] = { "Material/Score/bgm_maoudamashii_piano11_hard.csv" };
	char score1_E[64] = { "Material/Score/Cat_life_easy.csv" };
	char score1_N[64] = { "Material/Score/Cat_life_normal.csv" };
	char score1_H[64] = { "Material/Score/Cat_life_hard.csv" };
	char score2_E[64] = { "Material/Score/Morning_3_easy.csv" };
	char score2_N[64] = { "Material/Score/Morning_3_normal.csv" };
	char score2_H[64] = { "Material/Score/Morning_3_normal.csv" };
	char score3_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score3_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score3_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score4_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score4_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score4_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score5_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score5_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score5_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score6_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score6_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score6_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score7_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score7_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score7_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score8_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score8_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score8_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score9_E[64] = { "Material/Score/bgm_maoudamashii_piano11_easy.csv" };
	char score9_N[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	char score9_H[64] = { "Material/Score/bgm_maoudamashii_piano11_normal.csv" };
	printfDx("%d,%d\n", ChoiceMusic, Difficulty);

	switch (ChoiceMusic) {
	case 0:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_E);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_H);
		break;
	case 1:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score1_E);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score1_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score1_H);
		break;
	case 2:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score2_E);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score2_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score2_H);
		break;
	case 3:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	case 4:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	case 5:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	case 6:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	case 7:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	case 8:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	case 9:
		if (Difficulty == 0)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 1)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		if (Difficulty == 2)
			score[ChoiceMusic][Difficulty] = FileRead_open(score0_N);
		break;
	default:
		break;
	}
	//if (ChoiceMusic == 0 && Difficulty <= 1) {
	//	score1 = FileRead_open(Score1[ChoiceMusic][Difficulty]);//�t�@�C���ǂݍ���
	//}
	//else {
	//	score1 = FileRead_open(Score[0][0]);
	//}
	if (score[ChoiceMusic][Difficulty] == NULL) {
		printfDx("read error score[ChoiceMusic][Difficulty]\n");
		return 0;
	}
	for (i = 0; i < 1; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(score[ChoiceMusic][Difficulty]) != '\n') {}

	n = 0, num = 0;
	while (1) {
		for (i = 0; i < 64; i++) {
			input[i] = inputc[i] = FileRead_getc(score[ChoiceMusic][Difficulty]);//1�����擾����
			if (inputc[i] == '/') {//�X���b�V���������
				while (FileRead_getc(score[ChoiceMusic][Difficulty]) != '\n');//���s�܂Ń��[�v
				i = -1;//�J�E���^���ŏ��ɖ߂���
				continue;
			}
			if (input[i] == ',' || input[i] == '\n') {//�J���}�����s�Ȃ�
				inputc[i] = '\0';//�����܂ł𕶎���Ƃ�
				break;
			}
			if (input[i] == EOF) {//�t�@�C���̏I���Ȃ�
				goto WORD;//�I��
			}
		}
		switch (num) {
		case 0:	Notes[n].time = atoi(inputc); break;
		case 1:	Notes[n].spell_num = atoi(inputc); break;
		case 2:	Notes[n].tango_count = atoi(inputc); break;
		case 3: break;
		case 4: Notes[n].dificult = atoi(inputc); break;
		default:break;
		}
		//printfDx("%d\n", Notes[0].time);
		num++;
		if (num == 5) {
			num = 0;
			n++;
		}
	}
WORD:
	//DrawFormatString(x, y + 100, GetColor(0, 255, 0), "����%d\n", notes[3].dificult);
	for (int j = 0; j < n; j++) {
		printfDx("%d", Notes[j].spell_num);
		switch (Notes[j].dificult) {
		case 1:
			//if (Notes[j].tango_count - Notes[j - 1].tango_count != 0) {
			if (Notes[j].spell_num == 3) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell3N[rand_num].spell[0];
				j++;
				Notes[j].word = spell3N[rand_num].spell[1];
				j++;
				Notes[j].word = spell3N[rand_num].spell[2];
				//printfDx("%c%c%c\n", Notes[j - 2].word, Notes[j - 1].word, Notes[j].word);
			}
			else if (Notes[j].spell_num == 4) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell4N[rand_num].spell[0];
				j++;
				Notes[j].word = spell4N[rand_num].spell[1];
				j++;
				Notes[j].word = spell4N[rand_num].spell[2];
				j++;
				Notes[j].word = spell4N[rand_num].spell[3];
			}
			else if (Notes[j].spell_num == 5) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell5N[rand_num].spell[0];
				j++;
				Notes[j].word = spell5N[rand_num].spell[1];
				j++;
				Notes[j].word = spell5N[rand_num].spell[2];
				j++;
				Notes[j].word = spell5N[rand_num].spell[3];
				j++;
				Notes[j].word = spell5N[rand_num].spell[4];
			}
			break;
		case 2:
			//if (Notes[j].tango_count - Notes[j - 1].tango_count != 0) {
			if (Notes[j].spell_num == 3) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell3N[rand_num].spell[0];
				j++;
				Notes[j].word = spell3N[rand_num].spell[1];
				j++;
				Notes[j].word = spell3N[rand_num].spell[2];

			}
			else if (Notes[j].spell_num == 4) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell4N[rand_num].spell[0];
				j++;
				Notes[j].word = spell4N[rand_num].spell[1];
				j++;
				Notes[j].word = spell4N[rand_num].spell[2];
				j++;
				Notes[j].word = spell4N[rand_num].spell[3];

			}
			else if (Notes[j].spell_num == 5) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell5N[rand_num].spell[0];
				j++;
				Notes[j].word = spell5N[rand_num].spell[1];
				j++;
				Notes[j].word = spell5N[rand_num].spell[2];
				j++;
				Notes[j].word = spell5N[rand_num].spell[3];
				j++;
				Notes[j].word = spell5N[rand_num].spell[4];


			}
		case 3:
			//if (Notes[j].tango_count - Notes[j - 1].tango_count != 0) {
			if (Notes[j].spell_num == 3) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell3H[rand_num].spell[0];
				j++;
				Notes[j].word = spell3H[rand_num].spell[1];
				j++;
				Notes[j].word = spell3H[rand_num].spell[2];
				//printfDx("%c%c%c\n", Notes[j - 2].word, Notes[j - 1].word, Notes[j].word);
			}
			else if (Notes[j].spell_num == 4) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell4H[rand_num].spell[0];
				j++;
				Notes[j].word = spell4H[rand_num].spell[1];
				j++;
				Notes[j].word = spell4H[rand_num].spell[2];
				j++;
				Notes[j].word = spell4H[rand_num].spell[3];
			}
			else if (Notes[j].spell_num == 5) {
				rand_num = GetRand(LOAD_NUM_MAX);
				Notes[j].word = spell5H[rand_num].spell[0];
				j++;
				Notes[j].word = spell5H[rand_num].spell[1];
				j++;
				Notes[j].word = spell5H[rand_num].spell[2];
				j++;
				Notes[j].word = spell5H[rand_num].spell[3];
				j++;
				Notes[j].word = spell5H[rand_num].spell[4];
			}
			break;
			//}
		default:
			break;

		}
	}
	FileRead_close(score[ChoiceMusic][Difficulty]);
	NotesCount = n;
	return 1;

}

void LoadDictionary() {
	int num = 0;
	int gusukisu = 0;
	int n = 0, i, j, fp_3N, fp_4N, fp_5N, fp_3H, fp_4H, fp_5H;

	int input[64];
	char inputc[64];

	char dictionary_3N[64] = { "Material/Dictionary/dictionary_test_3N.csv" };
	char dictionary_4N[64] = { "Material/Dictionary/dictionary_test_4N.csv" };
	char dictionary_5N[64] = { "Material/Dictionary/dictionary_test_5N.csv" };
	char dictionary_3H[64] = { "Material/Dictionary/dictionary_test_3H.csv" };
	char dictionary_4H[64] = { "Material/Dictionary/dictionary_test_4H.csv" };
	char dictionary_5H[64] = { "Material/Dictionary/dictionary_test_5H.csv" };

	fp_3N = FileRead_open(dictionary_3N);//�t�@�C���ǂݍ���
	fp_4N = FileRead_open(dictionary_4N);//�t�@�C���ǂݍ���
	fp_5N = FileRead_open(dictionary_5N);//�t�@�C���ǂݍ���
	fp_3H = FileRead_open(dictionary_3H);//�t�@�C���ǂݍ���
	fp_4H = FileRead_open(dictionary_4H);//�t�@�C���ǂݍ���
	fp_5H = FileRead_open(dictionary_5H);//�t�@�C���ǂݍ���



										 //read errer�̃`�F�b�N
	if (fp_3N == NULL) {
		printfDx("read error fp_3N\n");
	}
	if (fp_4N == NULL) {
		printfDx("read error fp_4N\n");
	}
	if (fp_5N == NULL) {
		printfDx("read error fp_5N\n");
	}
	if (fp_3H == NULL) {
		printfDx("read error fp_3H\n");
	}
	if (fp_4H == NULL) {
		printfDx("read error fp_4H\n");
	}
	if (fp_5H == NULL) {
		printfDx("read error fp_5H\n");
	}

	//�ǂݍ��ݕ���

	for (i = 0; i < 1; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(fp_3N) != '\n');
	while (1) {

		for (i = 0; i < 500; i++) {
		JUMP:
			for (j = 0; j < 4; j++) {

				input[j] = inputc[j] = FileRead_getc(fp_3N);//1�����擾����

				if (inputc[j] == '/') {//�����A�擾����������/�ł������Ƃ�
					while (FileRead_getc(fp_3N) != '\n');//\n�łȂ��Ԃ͓ǂݍ��ݑ����A
					j = -1;//�������Ƃ��ɃJ�E���^��߂��B
					continue;
				}
				if (input[j] == ',' || input[j] == '\n') {//�J���}�����s�Ȃ�
					inputc[j] = '\0';//�����܂ł𕶎���Ƃ�
					gusukisu++;
					goto JUMP;
				}
				if (input[j] == EOF) {//�t�@�C���̏I���Ȃ�
					goto EXFILE;//�I��
				}

				if ((inputc[j] >= 'a'&& inputc[j] <= 'z') || (inputc[j] >= 'A' && inputc[j] <= 'Z')) {
					spell3N[i].spell[j] = inputc[j];
				}
				else if (inputc[j] >= '0'&& inputc[j] <= '9') {
					spell3N[i].No = atoi(inputc);
				} //�߂���߂���ǂݍ���Ő��������������f���Ăǂ������ɐU�蕪����

			}

		}


	}
EXFILE:
	LOAD_NUM_MAX = i - 1;

	for (i = 0; i < 1; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(fp_4N) != '\n');
	while (1) {

		for (i = 0; i < 500; i++) {
		JUMP2:
			for (j = 0; j < 5; j++) {

				input[j] = inputc[j] = FileRead_getc(fp_4N);//1�����擾����

				if (inputc[j] == '/') {//�����A�擾����������/�ł������Ƃ�
					while (FileRead_getc(fp_4N) != '\n');//\n�łȂ��Ԃ͓ǂݍ��ݑ����A
					j = -1;//�������Ƃ��ɃJ�E���^��߂��B
					continue;
				}
				if (input[j] == ',' || input[j] == '\n') {//�J���}�����s�Ȃ�
					inputc[j] = '\0';//�����܂ł𕶎���Ƃ�
					gusukisu++;
					goto JUMP2;
				}
				if (input[j] == EOF) {//�t�@�C���̏I���Ȃ�
					goto EXFILE2;//�I��
				}

				if ((inputc[j] >= 'a'&& inputc[j] <= 'z') || (inputc[j] >= 'A' && inputc[j] <= 'Z')) {
					spell4N[i].spell[j] = inputc[j];
				}
				else if (inputc[j] >= '0'&& inputc[j] <= '9') {
					spell4N[i].No = atoi(inputc);
				} //�߂���߂���ǂݍ���Ő��������������f���Ăǂ������ɐU�蕪����

			}

		}

		num++;
		if (num == 18) {
			num = 0;
			n++;
		}
	}
EXFILE2:
	for (i = 0; i < 1; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(fp_5N) != '\n');
	while (1) {

		for (i = 0; i < 500; i++) {
		JUMP3:
			for (j = 0; j < 6; j++) {

				input[j] = inputc[j] = FileRead_getc(fp_5N);//1�����擾����

				if (inputc[j] == '/') {//�����A�擾����������/�ł������Ƃ�
					while (FileRead_getc(fp_5N) != '\n');//\n�łȂ��Ԃ͓ǂݍ��ݑ����A
					j = -1;//�������Ƃ��ɃJ�E���^��߂��B
					continue;
				}
				if (input[j] == ',' || input[j] == '\n') {//�J���}�����s�Ȃ�
					inputc[j] = '\0';//�����܂ł𕶎���Ƃ�
					gusukisu++;
					goto JUMP3;
				}
				if (input[j] == EOF) {//�t�@�C���̏I���Ȃ�
					goto EXFILE3;//�I��
				}

				if ((inputc[j] >= 'a'&& inputc[j] <= 'z') || (inputc[j] >= 'A' && inputc[j] <= 'Z')) {
					spell5N[i].spell[j] = inputc[j];
				}
				else if (inputc[j] >= '0'&& inputc[j] <= '9') {
					spell5N[i].No = atoi(inputc);
				} //�߂���߂���ǂݍ���Ő��������������f���Ăǂ������ɐU�蕪����

			}

		}

		num++;
		if (num == 18) {
			num = 0;
			n++;
		}
	}
EXFILE3:
	//3H
	for (i = 0; i < 3; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(fp_3H) != '\n');
	while (1) {

		for (i = 0; i < 500; i++) {
		JUMP4:
			for (j = 0; j < 4; j++) {

				input[j] = inputc[j] = FileRead_getc(fp_3H);//1�����擾����

				if (inputc[j] == '/') {//�����A�擾����������/�ł������Ƃ�
					while (FileRead_getc(fp_3H) != '\n');//\n�łȂ��Ԃ͓ǂݍ��ݑ����A
					j = -1;//�������Ƃ��ɃJ�E���^��߂��B
					continue;
				}
				if (input[j] == ',' || input[j] == '\n') {//�J���}�����s�Ȃ�
					inputc[j] = '\0';//�����܂ł𕶎���Ƃ�
					gusukisu++;
					goto JUMP4;
				}
				if (input[j] == EOF) {//�t�@�C���̏I���Ȃ�
					goto EXFILE4;//�I��
				}

				if ((inputc[j] >= 'a'&& inputc[j] <= 'z') || (inputc[j] >= 'A' && inputc[j] <= 'Z')) {
					spell3H[i].spell[j] = inputc[j];
				}

				else if (inputc[j] >= '0'&& inputc[j] <= '9') {
					WaitKey;
					spell3H[i].No = atoi(inputc);
				} //�߂���߂���ǂݍ���Ő��������������f���Ăǂ������ɐU�蕪����


			}

		}


	}
EXFILE4:
	for (i = 0; i < 1; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(fp_4H) != '\n');
	while (1) {

		for (i = 0; i < 500; i++) {
		JUMP5:
			for (j = 0; j < 5; j++) {

				input[j] = inputc[j] = FileRead_getc(fp_4H);//1�����擾����

				if (inputc[j] == '/') {//�����A�擾����������/�ł������Ƃ�
					while (FileRead_getc(fp_4H) != '\n');//\n�łȂ��Ԃ͓ǂݍ��ݑ����A
					j = -1;//�������Ƃ��ɃJ�E���^��߂��B
					continue;
				}
				if (input[j] == ',' || input[j] == '\n') {//�J���}�����s�Ȃ�
					inputc[j] = '\0';//�����܂ł𕶎���Ƃ�
					gusukisu++;
					goto JUMP5;
				}
				if (input[j] == EOF) {//�t�@�C���̏I���Ȃ�
					goto EXFILE5;//�I��
				}

				if ((inputc[j] >= 'a'&& inputc[j] <= 'z') || (inputc[j] >= 'A' && inputc[j] <= 'Z')) {
					spell4H[i].spell[j] = inputc[j];
				}
				else if (inputc[j] >= '0'&& inputc[j] <= '9') {
					spell4H[i].No = atoi(inputc);
				} //�߂���߂���ǂݍ���Ő��������������f���Ăǂ������ɐU�蕪����


			}

		}

		num++;
		if (num == 18) {
			num = 0;
			n++;
		}
	}
EXFILE5:
	for (i = 0; i < 1; i++)//�ŏ���1�s�ǂݔ�΂�
		while (FileRead_getc(fp_5H) != '\n');
	while (1) {

		for (i = 0; i < 500; i++) {
		JUMP6:
			for (j = 0; j < 6; j++) {

				input[j] = inputc[j] = FileRead_getc(fp_5H);//1�����擾����

				if (inputc[j] == '/') {//�����A�擾����������/�ł������Ƃ�
					while (FileRead_getc(fp_5H) != '\n');//\n�łȂ��Ԃ͓ǂݍ��ݑ����A
					j = -1;//�������Ƃ��ɃJ�E���^��߂��B
					continue;
				}
				if (input[j] == ',' || input[j] == '\n') {//�J���}�����s�Ȃ�
					inputc[j] = '\0';//�����܂ł𕶎���Ƃ�
					gusukisu++;
					goto JUMP6;
				}
				if (input[j] == EOF) {//�t�@�C���̏I���Ȃ�
					goto EXFILE6;//�I��
				}

				if ((inputc[j] >= 'a'&& inputc[j] <= 'z') || (inputc[j] >= 'A' && inputc[j] <= 'Z')) {
					spell5H[i].spell[j] = inputc[j];
				}
				else if (inputc[j] >= '0'&& inputc[j] <= '9') {
					spell5H[i].No = atoi(inputc);
				} //�߂���߂���ǂݍ���Ő��������������f���Ăǂ������ɐU�蕪����

			}

		}

		num++;
		if (num == 18) {
			num = 0;
			n++;
		}
	}
EXFILE6:

	FileRead_close(fp_3N);
	FileRead_close(fp_4N);
	FileRead_close(fp_5N);
	FileRead_close(fp_3H);
	FileRead_close(fp_4H);
	FileRead_close(fp_5H);

	//DrawFormatString(x, y, GetColor(0, 255, 0), "%c\n", spell3N[0].spell[0]);
	//printfDx("preload�������\n");

}