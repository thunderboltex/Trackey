#include "global.h"

void GraphMenuBack() {
	DrawGraph(0, 0, MenuBack, FALSE);
}
/*
int GraphFeedIn() {
	for (int i = 0; i < 256; i += 1) {
		SetDrawBright(i, i, i);
		DrawBox(0, 0, 1366, 768, GetColor(0, 0, 0), TRUE);
	}
	return 1;
}

int GraphFeedOut() {
	for (int i = 0; i < 256; i += 1) {
		SetDrawBright(255-i, 255-i, 255-i);
		DrawBox(0, 0, 1366, 768, GetColor(0, 0, 0), TRUE);
	}
	if (GraphFeedIn() == 1) {
		return 1;
	}
}*/

void GraphMenuArrow() {
	MenuArrowBrink = (MenuArrowBrink + 1) % 50;
	if (MenuArrowBrink < 30) {
		switch (MenuSelectNum) {
		case 0:
			DrawRotaGraph(390, 380, 0.3, 0.0, MenuArrow, TRUE);
			break;
		case 1:
			DrawRotaGraph(490, 450, 0.3, 0.0, MenuArrow, TRUE);
			break;
		case 2:
			DrawRotaGraph(550, 520, 0.3, 0.0, MenuArrow, TRUE);
			break;
		default:
			break;
		}
	}
}

void GraphMenuMessage() {
	switch (MenuSelectNum) {
	case 0:
		DrawStringToHandle(420, 350, "GAME START", GetColor(255, 255, 0), Font00);
		DrawStringToHandle(525, 420, "OPTION", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(585, 490, "END", GetColor(255, 255, 255), Font00);
		break;
	case 1:
		DrawStringToHandle(420, 350, "GAME START", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(525, 420, "OPTION", GetColor(255, 255, 0), Font00);
		DrawStringToHandle(585, 490, "END", GetColor(255, 255, 255), Font00);
		break;
	case 2:
		DrawStringToHandle(420, 350, "GAME START", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(525, 420, "OPTION", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(585, 490, "END", GetColor(255, 255, 0), Font00);
		break;
	default:
		break;
	}
}

void GraphSlidebar() {
	DrawRotaGraph(900, 160, 1.0, 0.0, OptionSlidebar, TRUE);
	DrawRotaGraph(900, 450, 1.0, 0.0, OptionSlidebar, TRUE);

}

void GraphMenuMain() {
	if (!FeedOutFlag) {
		if (Bright < 255) {
			SetDrawBright(Bright, Bright, Bright);
			Bright += 20;
			if (Bright >= 255)
				Bright = 255;
		}
	}
	GraphMenuBack();
	GraphMenuMessage();
	GraphMenuArrow();
}

void GraphOptionBack() {
	DrawGraph(0, 0, OptionBack, FALSE);
}

void GraphOptionArrow() {
	OptionArrowBlink = (OptionArrowBlink + 1) % 50;
	if (OptionArrowBlink < 30) {
		switch (OptionSelect) {
		case 0:
			DrawRotaGraph(270, 150, 0.3, 0.0, OptionArrow, TRUE);
			break;
		case 1:
			DrawRotaGraph(270, 445, 0.3, 0.0, OptionArrow, TRUE);
			break;
		case 2:
			DrawRotaGraph(270, 740, 0.3, 0.0, OptionArrow, TRUE);
			break;
		default:break;
		}
	}
}

void GraphOptionMeseage() {
	switch (OptionSelect) {
		/*　Volumeを選んでいる場合　*/
	case 0:
		DrawStringToHandle(300, 410, "Speed", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(300, 120, "Volume", GetColor(255, 255, 0), Font00);
		DrawStringToHandle(300, 700, "Back", GetColor(255, 255, 255), Font00);
		break;
		/*　Speedを選んでいる場合　*/
	case 1:
		DrawStringToHandle(300, 410, "Speed", GetColor(255, 255, 0), Font00);
		DrawStringToHandle(300, 120, "Volume", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(300, 700, "Back", GetColor(255, 255, 255), Font00);
		break;
	case 2:
		DrawStringToHandle(300, 410, "Speed", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(300, 120, "Volume", GetColor(255, 255, 255), Font00);
		DrawStringToHandle(300, 700, "Back", GetColor(255, 255, 0), Font00);
		break;
	default:
		break;
	}
	DrawStringToHandle(730, 175, "50%", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(880, 175, "100%", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(1030, 175, "150%", GetColor(255, 255, 255), Font01);

	DrawStringToHandle(720, 465, "×0.5", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(820, 465, "×1.0", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(920, 465, "×1.5", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(1020, 465, "×2.0", GetColor(255, 255, 255), Font01);
}

void GraphOptionBar() {
	DrawRotaGraph(900, 160, 1.0, 0.0, OptionSlidebar, TRUE);
	DrawRotaGraph(900, 450, 1.0, 0.0, OptionSlidebar, TRUE);
}

void GraphOptionSlideButton() {
	DrawRotaGraph(VolumeButton.X, VolumeButton.Y, 1.0, 0.0, OptionSlidebutton, TRUE);
	DrawRotaGraph(SpeedButton.X, SpeedButton.Y, 1.0, 0.0, OptionSlidebutton, TRUE);
}

void GraphOptionMain() {
	if (Bright < 255) {
		SetDrawBright(Bright, Bright, Bright);
		Bright += 20;
		if (Bright >= 255)
			Bright = 255;
	}
	GraphOptionBack();
	GraphOptionArrow();
	GraphOptionMeseage();
	GraphOptionBar();
	GraphOptionSlideButton();
}

void GraphGameBack() {
	DrawGraph(0, 0, GameMainBack, FALSE);
	DrawGraph(260, 0, GameLaneBack, TRUE);
	DrawGraph(0, 0, GameLeftBack, TRUE);
	DrawGraph(1106, 0, GameRightBack, TRUE);
	DrawGraph(260, 0, GameWordBack, FALSE);
}

void GraphChoiceArrow() {
	DrawRotaGraph(311, 384, 3.0, 0.0, LArrow, TRUE);
	DrawRotaGraph(1054, 384, 3.0, 0.0, RArrow, TRUE);
}

void GraphChoiceJacket() {
	switch (ChoiceMusic) {
	case 0:
		if (CheckSoundMem(MUSIC[0].Track) == 0)
			MUSIC[0].flag = true;
		DrawStringToHandle(0, 0, "piano11", GetColor(255, 255, 255), TitleFont);
		DrawRotaGraph(683, 384, 2.0, 0.0, MUSIC[0].Jacket, TRUE);
		DrawRotaGraph(100, 384, 0.6, 0.0, MUSIC[4].Jacket, TRUE);
		DrawRotaGraph(1266, 384, 0.6, 0.0, MUSIC[1].Jacket, TRUE);
		break;
	case 1:
		if (CheckSoundMem(MUSIC[1].Track) == 0)
			MUSIC[1].flag = true;
		DrawStringToHandle(0, 0, "Cat life", GetColor(255, 255, 255), TitleFont);
		DrawRotaGraph(683, 384, 2.0, 0.0, MUSIC[1].Jacket, TRUE);
		DrawRotaGraph(100, 384, 0.6, 0.0, MUSIC[0].Jacket, TRUE);
		DrawRotaGraph(1266, 384, 0.6, 0.0, MUSIC[2].Jacket, TRUE);
		break;
	case 2:
		if (CheckSoundMem(MUSIC[2].Track) == 0)
			MUSIC[2].flag = true;
		DrawStringToHandle(0, 0, "Moning", GetColor(255, 255, 255), TitleFont);
		DrawRotaGraph(683, 384, 2.0, 0.0, MUSIC[2].Jacket, TRUE);
		DrawRotaGraph(100, 384, 0.6, 0.0, MUSIC[1].Jacket, TRUE);
		DrawRotaGraph(1266, 384, 0.6, 0.0, MUSIC[3].Jacket, TRUE);
		break;
	case 3:
		if (CheckSoundMem(MUSIC[3].Track) == 0)
			MUSIC[3].flag = true;
		DrawFormatString(250, 0, 255, "test4");
		DrawRotaGraph(683, 384, 2.0, 0.0, MUSIC[3].Jacket, TRUE);
		DrawRotaGraph(100, 384, 0.6, 0.0, MUSIC[2].Jacket, TRUE);
		DrawRotaGraph(1266, 384, 0.6, 0.0, MUSIC[4].Jacket, TRUE);
		break;
	case 4:
		if (CheckSoundMem(MUSIC[4].Track) == 0)
			MUSIC[4].flag = true;
		DrawFormatString(250, 0, 255, "test5");
		DrawRotaGraph(683, 384, 2.0, 0.0, MUSIC[4].Jacket, TRUE);
		DrawRotaGraph(100, 384, 0.6, 0.0, MUSIC[3].Jacket, TRUE);
		DrawRotaGraph(1266, 384, 0.6, 0.0, MUSIC[0].Jacket, TRUE);
		break;
	default:
		break;
	}
}

void GraphChoiceDiff() {

	DrawStringToHandle(1200, 10, "EASY", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(1200, 50, "NORMAL", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(1200, 90, "HARD", GetColor(255, 255, 255), Font01);

	switch (Difficulty) {
	case 0:
		DrawRotaGraph(1180, 25, 0.2, 0.0, DiffArrow, TRUE);
		break;
	case 1:
		DrawRotaGraph(1180, 65, 0.2, 0.0, DiffArrow, TRUE);
		break;
	case 2:
		DrawRotaGraph(1180, 105, 0.2, 0.0, DiffArrow, TRUE);
		break;
	default:break;
	}
}

void GraphChoicePressEnter() {
	int count = 0;
	count = (count + 1) % 50;
	if (count < 20) {
		DrawStringToHandle(900, 650, "Press Enter!", GetColor(255, 255, 255), Font00);
	}
}

void GraphChoiceMain() {
	if (Bright < 255) {
		SetDrawBright(Bright, Bright, Bright);
		Bright += 20;
		if (Bright >= 255)
			Bright = 255;
	}
	DrawGraph(0, 0, GameMainBack, FALSE);
	GraphChoicePressEnter();
	GraphChoiceJacket();
	GraphChoiceDiff();
	GraphChoiceArrow();
}

void GraphNots(int i) {
	if (Notes[i].flag) {
		if (Notes[i].Lane < 5) {
			DrawRotaGraph(260 + Notes[i].Lane * 84 + 42, Notes[i].Y, Notes[i].Ext, Notes[i].Angle, Notes[i].Nots, TRUE, FALSE);
		}
		else {
			DrawRotaGraph(260 + Notes[i].Lane * 84 + 6 + 42, Notes[i].Y, Notes[i].Ext, Notes[i].Angle, Notes[i].Nots, TRUE, FALSE);
		}
		Notes[i].Y += NotesFlameSpeed;
	}
	else if (Notes[i].EffectFlag) {
		if (Notes[i].Lane < 5) {
			DrawRotaGraph(260 + Notes[i].Lane * 84 + 42, Notes[i].Y, Notes[i].Ext, Notes[i].Angle, Notes[i].Nots, TRUE, FALSE);
		}
		else {
			DrawRotaGraph(260 + Notes[i].Lane * 84 + 6 + 42, Notes[i].Y, Notes[i].Ext, Notes[i].Angle, Notes[i].Nots, TRUE, FALSE);
		}
	}
}

void GraphBar() {
	DrawGraph(260 - 27, 598, GameBarBack, TRUE);
}

void GraphMusicTitle() {
	switch (ChoiceMusic) {
	case 0:
		DrawStringToHandle(0, 0, "piano11", GetColor(255, 255, 255), TitleFont);
		break;
	case 1:
		DrawStringToHandle(0, 0, "Cat life", GetColor(255, 255, 255), TitleFont);
		break;
	case 2:
		DrawStringToHandle(0, 0, "Moning", GetColor(255, 255, 255), TitleFont);
		break;
	case 3:
		DrawStringToHandle(0, 0, "", GetColor(255, 255, 255), TitleFont);
		break;
	case 4:
		DrawStringToHandle(0, 0, "", GetColor(255, 255, 255), TitleFont);
		break;
	default:
		break;
	}
}

void GraphGameMain() {
	GraphGameBack();
	GraphBar();
	GraphMusicTitle();
}

void GraphResultMess() {
	/* 　　　　　文字表示　　　　　　　*/
	DrawStringToHandle(150, 80, "Score", GetColor(255, 255, 255), Font01);
	DrawStringToHandle(100, 280, "Perfect", GetColor(255, 255, 0), Font00);
	DrawStringToHandle(100, 380, "Great", GetColor(255, 170, 0), Font00);
	DrawStringToHandle(100, 480, "Good", GetColor(255, 100, 0), Font00);
	DrawStringToHandle(100, 580, "Miss", GetColor(255, 50, 0), Font00);
}

void GraphResultScore() {
	if (ResultTime >= 30) {
		/*　　　　スコア表示　　　　*/
		DrawFormatStringToHandle(600, 80, GetColor(0, 255, 255), Font01, "%d", Score);
		if (ResultTime == 30)
			SEFlag[0] = true;

		/*  　　　判定の個数表示　　　*/
		if (ResultTime >= 60) {
			DrawFormatStringToHandle(500, 280, GetColor(255, 255, 0), Font00, "×%d", PerfectCount);
			DrawFormatStringToHandle(500, 380, GetColor(255, 170, 0), Font00, "×%d", GreatCount);
			DrawFormatStringToHandle(500, 480, GetColor(255, 100, 0), Font00, "×%d", GoodCount);
			DrawFormatStringToHandle(500, 580, GetColor(255, 50, 0), Font00, "×%d", MissCount);
			if (ResultTime == 60)
				SEFlag[0] = true;

			/* 　　　　達成度表示　　　　*/
			if (ResultTime >= 90) {
				DrawFormatStringToHandle(870, 300, GetColor(255, 255, 255), Font00, "達成度%.f％", LoA);
				if (ResultTime == 90)
					SEFlag[0] = true;

				/* 　　　　達成度に応じた評価を表示　　　　　*/
				if (ResultTime >= 120) {
					if (ResultTime == 120)
						SEFlag[0] = true;
					if (LoA >= 95) {
						DrawStringToHandle(1000, 400, "SS", GetColor(255, 255, 0), Font02);
					}
					else if (LoA < 95 && LoA >= 90) {
						DrawStringToHandle(1000, 400, "S", GetColor(255, 100, 0), Font02);
					}
					else if (LoA < 90 && LoA >= 80) {
						DrawStringToHandle(1000, 400, "A", GetColor(255, 0, 0), Font02);
					}
					else if (LoA < 80 && LoA >= 60) {
						DrawStringToHandle(1000, 400, "B", GetColor(0, 0, 255), Font02);
					}
					else if (LoA < 60) {
						DrawStringToHandle(1000, 400, "C", GetColor(255, 170, 0), Font02);
					}
					/*　Press Enter 点滅表示　*/
					if (ResultTime >= 180) {
						ResultEnterCount = (ResultEnterCount + 1) % 50;
						if (ResultEnterCount < 30) {
							DrawStringToHandle(900, 600, "Press Enter", GetColor(255, 255, 0), Font03);
						}
					}
				}
			}
		}
	}
}

void GraphResultMain() {
	GraphResultMess();
	GraphResultScore();
}