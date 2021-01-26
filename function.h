//Key.cpp
GLOBAL int GetHitKeyStateAll_2();
GLOBAL int CheckStateKey(unsigned char Handle);

//Ini.cpp
GLOBAL void Ini();
GLOBAL void GameIni();

//Load.cpp
GLOBAL void LoadMain();
GLOBAL void LoadDictionary();
GLOBAL int LoadScore();

//Option.cpp
GLOBAL void OptionMain();

//Graph.cpp
GLOBAL void GraphMenuMain();
GLOBAL void GraphNots(int i);
GLOBAL void GraphOptionMain();
GLOBAL void GraphBar();
GLOBAL void GraphChoiceArrow();
GLOBAL void GraphMusicTitle();
GLOBAL void GraphGameMain();
GLOBAL void GraphChoiceMain();

//FPS.cpp
GLOBAL void FPSWait();
GLOBAL void DrawFPS(int x, int y);

//Sound.cpp
GLOBAL void MusicIni();
GLOBAL void MusicMain();
GLOBAL void MusicStop();
GLOBAL void MusicCheck();

//Nots.cpp
//GLOBAL void NotsMain();
GLOBAL int NotesSet();
GLOBAL void NotesFlagCheck();
GLOBAL void NotesCheck();
GLOBAL void NotesEffect();

//Choice.cpp
GLOBAL void ChoiceMain();

//Menu.cpp
GLOBAL void MenuMain();

//Game.cpp
GLOBAL void GameMain();

//Result.cpp
GLOBAL void ScoreCheck();
GLOBAL void ResultMain();
GLOBAL void GraphResultMain();