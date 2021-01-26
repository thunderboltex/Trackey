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

//変数
//フェイズ制御変数
GLOBAL int func_state;

//Start画面の背景画像などハンドラ
GLOBAL int MenuBack;
GLOBAL int MenuArrow;

//Game画面の背景画像ハンドラ
GLOBAL int GameMainBack;
GLOBAL int GameRightBack;
GLOBAL int GameLeftBack;
GLOBAL int GameWordBack;
GLOBAL int GameBarBack;
GLOBAL int GameLaneBack;

//Option画面の画像ハンドラ
GLOBAL int OptionBack;
GLOBAL int OptionSlidebar;
GLOBAL int OptionSlidebutton;
GLOBAL int OptionArrow;

//Option画面での変数
GLOBAL int OptionSelect;
GLOBAL int OptionVolume;
GLOBAL int OptionSpeed;
GLOBAL int OptionArrowBlink;
GLOBAL SlideButton_t VolumeButton;
GLOBAL SlideButton_t SpeedButton;

//BGMSEのハンドラ
GLOBAL int BGM[BGM_MAX];
GLOBAL bool BGMFlag[BGM_MAX];
GLOBAL int SE[SE_MAX];
GLOBAL bool SEFlag[SE_MAX];
GLOBAL music_t MUSIC[MUSIC_MAX];
GLOBAL int ChoiceMusic;

//NOTSのハンドラ
GLOBAL int NotsHandle[26];

//Nots格納変数
GLOBAL notes_t Notes[MAXSCORE_NUM];

//辞書用構造体宣言
GLOBAL spell3N_t spell3N[MAXSPELL];//辞書からもらった単語の情報
GLOBAL spell4N_t spell4N[MAXSPELL];//辞書からもらった単語の情報
GLOBAL spell5N_t spell5N[MAXSPELL];//辞書からもらった単語の情報
GLOBAL spell3H_t spell3H[MAXSPELL];//辞書からもらった単語の情報
GLOBAL spell4H_t spell4H[MAXSPELL];//辞書からもらった単語の情報
GLOBAL spell5H_t spell5H[MAXSPELL];//辞書からもらった単語の情報

//単語の数の変数spell3N[i].spell[j]での　i　部分
GLOBAL int LOAD_NUM_MAX;

//Notsが流れる速度
GLOBAL double NotesSpeed;
GLOBAL int NotesFlameSpeed;
GLOBAL int NotesMoveFlame;

//Nots出現のためのカウンタと遅延
GLOBAL int FlameCount;
GLOBAL int DelayFlame;

//Scoreのノーツ数を格納
GLOBAL int NotesCount;

//Choice.cppの画像
GLOBAL int LArrow, RArrow, DiffArrow;
GLOBAL int Difficulty;

//Font
GLOBAL int Font00, Font01,Font02,Font03,Font04,Font05,TitleFont;

//Menu
GLOBAL int MenuSelectNum;
GLOBAL int MenuArrowBrink;

//Bright値
GLOBAL int Bright;
GLOBAL bool FeedOutFlag;

//判定
GLOBAL int PerfectCount;
GLOBAL int GreatCount;
GLOBAL int GoodCount;
GLOBAL int MissCount;
GLOBAL int Score;
GLOBAL double LoA; //達成度

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

/*ホームポジションキー以外のキーのx,z座標*/
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