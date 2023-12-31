#include"GameClearScene.h"
#include"DxLib.h"
#include"SceneManager.h"

int GameClearImage;
int GameClearSE;
int GameClearFlag;

int GameClearScene_Initialize(void)
{
	int ret = 0;

	//画像の読込み
	GameClearImage = LoadGraph("images/gameclear.png");
	//音源の読込み
	GameClearSE = LoadSoundMem("sounds/gameclear_se.mp3");


	GameClearFlag = 0;

	//エラーチェック
	if (GameClearImage == -1)
	{
		ret = -1;
	}
	if (GameClearSE == -1)
	{
		ret = -1;
	}
	return ret;
}

void GameClearScene_Update(void)
{
	//ゲームクリア効果音再生チェック
	if (CheckSoundMem(GameClearSE) == 0)
	{
		if (GameClearFlag == TRUE)
		{
			Change_Scene(E_GAMEMAIN);
		}
		else
		{
			PlaySoundMem(GameClearSE, DX_PLAYTYPE_BACK);
			GameClearFlag = TRUE;
		}
	}
}

void GameClearScene_Draw(void)
{
	DrawGraph(0, 0, GameClearImage, FALSE);
}