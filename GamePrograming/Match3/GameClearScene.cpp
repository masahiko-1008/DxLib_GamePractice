#include"GameClearScene.h"
#include"DxLib_h"
#include"SceneManager.h"

int GameClearImage;
int GameClearSE;
int GameClearFlag;

int GameClearScene_Initialize(void)
{
	int ret = 0;

	//�摜�̓Ǎ���
	GameClearImage = LoadGraph("images/gameclear.png");
	//�����̓Ǎ���
	GameClearSE = LoadSoundMem("sonuds/gameclear_se.mp3");


	GameClearFlag = 0;

	//�G���[�`�F�b�N
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
	//�Q�[���N���A���ʉ��Đ��`�F�b�N
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