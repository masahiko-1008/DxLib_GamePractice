#include"GameOverScene.h"
#include"DxLib.h"
#include"SceneManager.h"

int GameOverImage;
int GameOverSE;
int GameOverFlag;

int GameOverScene_initialize(void)
{
	int ret = 0;

	//画像読み込み
	GameOverImage = LoadGraph("images/gameover.png");
	//音源読み込み
	GameOverSE = LoadSoundMem("sounds/gameover_se.mp3");

	GameOverFlag = FALSE;


	//エラーチェック
	if (GameOverImage == -1)
	{
		ret = -1;
	}
	if (GameOverSE == -1)
	{
		ret = -1;
	}

	return ret;
}

void GameOverScene_Update(void)
{
	//ゲームオーバー効果音再生チェック
	if (CheckSoundMem(GameOverSE) == 0)
	{
		if (GameOverFlag == TRUE)
		{
			Change_Scene(E_GAME_OVER);
		}
		else
		{
			PlaySoundMem(GameOverSE, DX_PLAYTYPE_BACK);
			GameOverFlag = TRUE;
		}

	}
}

void GameOverScene_Draw(void)
{
	//ゲームオーバー画像表示
	DrawGraph(0, 0, GameOverImage, FALSE);
}