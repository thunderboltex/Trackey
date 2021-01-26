/*typedef struct {
	int Time;
	int No;
	int Lane;
	int Nots;
	int Y;
}nots_t;
*/

//3語Normal辞書データに関する構造体
typedef struct {
	int No;
	char spell[3];
} spell3N_t;

//4語Normal辞書データに関する構造体
typedef struct {
	int No;
	char spell[4];
}spell4N_t;

//5語Normal辞書データに関する構造体
typedef struct {
	int No;
	char spell[5];
}spell5N_t;

//3語Hard辞書データに関する構造体
typedef struct {
	int No;
	char spell[3];
}spell3H_t;

//4語Hard辞書データに関する構造体
typedef struct {
	int No;
	char spell[4];
}spell4H_t;

//3語Hard辞書データに関する構造体
typedef struct {
	int No;
	char spell[5];
}spell5H_t;

//譜面データに関する構造体
typedef struct {
	int time;
	int spell_num;
	int tango_count;
	char word;
	int dificult;
	int Lane;
	int Nots;
	int Y;
	int flam;
	bool flag;
	int KeyCode;
	double Ext;
	double Angle;
	int EffectMode;
	int EffectFlam;
	bool EffectFlag;
	int EffectPal;
}notes_t;

//楽曲データ
typedef struct {
	int Track;
	int Jacket;
	bool flag;
	char title[64];
	char writer[64];
}music_t;

//スライドボタン
typedef struct {
	int X;
	int Y;
}SlideButton_t;

struct homeposition {
	float x;
	float z;
};

struct key {
	float x;
	float z;
};

struct fingerposition {
	float x;
	float z;
};