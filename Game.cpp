#include "global.h"

void GameMain() {
	MusicCheck();
	NotesFlagCheck();
	NotesCheck();
	GraphGameMain();
	NotesEffect();
	DrawFPS(100, 100);
}