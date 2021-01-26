#include "DxLib.h"
#include "define.h"
#include "Math.h"
#include <string.h>
#include "Leap.h"
#include <cstring>
#include <fstream>
#include <windows.h>


using namespace Leap;
class SampleListener : public Listener {
public:
	//virtual void onInit(const Controller&);
	//virtual void onConnect(const Controller&);
	//virtual void onDisconnect(const Controller&);
	//virtual void onExit(const Controller&);
	virtual void onFrame(const Controller&);
	virtual void onFocusGained(const Controller&);
	virtual void onFocusLost(const Controller&);
	virtual void onDeviceChange(const Controller&);
	virtual void onServiceConnect(const Controller&);
	virtual void onServiceDisconnect(const Controller&);

private:
};




#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern
#endif

#include "function.h"

//�ϐ�
//�t�F�C�Y����ϐ�
GLOBAL int func_state;

//Start��ʂ̔w�i�摜�Ȃǃn���h��
GLOBAL int MenuBack;
GLOBAL int MenuArrow;

//Game��ʂ̔w�i�摜�n���h��
GLOBAL int GameMainBack;
GLOBAL int GameRightBack;
GLOBAL int GameLeftBack;
GLOBAL int GameWordBack;
GLOBAL int GameBarBack;
GLOBAL int GameLaneBack;

//Option��ʂ̉摜�n���h��
GLOBAL int OptionBack;
GLOBAL int OptionSlidebar;
GLOBAL int OptionSlidebutton;
GLOBAL int OptionArrow;

//Option��ʂł̕ϐ�
GLOBAL int OptionSelect;
GLOBAL int OptionVolume;
GLOBAL int OptionSpeed;
GLOBAL int OptionArrowBlink;
GLOBAL SlideButton_t VolumeButton;
GLOBAL SlideButton_t SpeedButton;

//BGMSE�̃n���h��
GLOBAL int BGM[BGM_MAX];
GLOBAL bool BGMFlag[BGM_MAX];
GLOBAL int SE[SE_MAX];
GLOBAL bool SEFlag[SE_MAX];
GLOBAL music_t MUSIC[MUSIC_MAX];
GLOBAL int ChoiceMusic;

//NOTS�̃n���h��
GLOBAL int NotsHandle[26];

//Nots�i�[�ϐ�
GLOBAL notes_t Notes[MAXSCORE_NUM];

//�����p�\���̐錾
GLOBAL spell3N_t spell3N[MAXSPELL];//���������������P��̏��
GLOBAL spell4N_t spell4N[MAXSPELL];//���������������P��̏��
GLOBAL spell5N_t spell5N[MAXSPELL];//���������������P��̏��
GLOBAL spell3H_t spell3H[MAXSPELL];//���������������P��̏��
GLOBAL spell4H_t spell4H[MAXSPELL];//���������������P��̏��
GLOBAL spell5H_t spell5H[MAXSPELL];//���������������P��̏��

//�P��̐��̕ϐ�spell3N[i].spell[j]�ł́@i�@����
GLOBAL int LOAD_NUM_MAX;

//Nots������鑬�x
GLOBAL double NotesSpeed;
GLOBAL int NotesFlameSpeed;
GLOBAL int NotesMoveFlame;

//Nots�o���̂��߂̃J�E���^�ƒx��
GLOBAL int FlameCount;
GLOBAL int DelayFlame;

//Score�̃m�[�c�����i�[
GLOBAL int NotesCount;

//Choice.cpp�̉摜
GLOBAL int LArrow, RArrow, DiffArrow;
GLOBAL int Difficulty;

//Font
GLOBAL int Font00, Font01,Font02,Font03,Font04,Font05,TitleFont;

//Menu
GLOBAL int MenuSelectNum;
GLOBAL int MenuArrowBrink;

//Bright�l
GLOBAL int Bright;
GLOBAL bool FeedOutFlag;

//����
GLOBAL int PerfectCount;
GLOBAL int GreatCount;
GLOBAL int GoodCount;
GLOBAL int MissCount;
GLOBAL int Score;
GLOBAL double LoA; //�B���x

//Result.cpp
GLOBAL int ResultTime;
GLOBAL int ResultWait;
GLOBAL int ResultEnterCount;

GLOBAL homeposition A;
GLOBAL homeposition S;
GLOBAL homeposition D;
GLOBAL homeposition F;
GLOBAL homeposition J;
GLOBAL homeposition K;
GLOBAL homeposition L;
GLOBAL homeposition P;

/*�z�[���|�W�V�����L�[�ȊO�̃L�[��x,z���W*/
GLOBAL key Q;
GLOBAL key Z;
GLOBAL key W;
GLOBAL key X;
GLOBAL key E;
GLOBAL key C;
GLOBAL key T;
GLOBAL key G;
GLOBAL key B;
GLOBAL key R;
GLOBAL key V;
GLOBAL key Y;
GLOBAL key H;
GLOBAL key N;
GLOBAL key U;
GLOBAL key M;
GLOBAL key I;
GLOBAL key O;

GLOBAL SampleListener listener;
GLOBAL Controller controller;

GLOBAL fingerposition LeftHand[4];
GLOBAL fingerposition RightHand[4];