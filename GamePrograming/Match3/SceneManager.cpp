#include"SceneManager.h"
#include"TitleScene.h"
#include"GameMainScene.h"
#include"GameClearScene.h"
#include"GameOverScene.h"


GAME_MODE Game_Mode;       //�Q�[�����[�h���(����)
GAME_MODE Nezt_Mode;       //�Q�[�����[�h���(���j

int SceneManager_Initialize(GAME_MODE mode)
{
	int Read_Error;

	//�V�[���ǂݍ��ݏ���
	//�^�C�g���摜
	Read_Error = TitleScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[�����C�����
	Read_Error = GameMainScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[���N���A���
	Read_Error = GameClearScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//�Q�[���I�[�o�[���
	Read_Error = GameOverScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	Game_Mode = mode;
	Next_Mode = Game_Mode;

	return Read_Error;
}


void SceneManaGer_Update(void)
{
		//�O�t���[���ƃQ�[�����[�h������Ă�����V�[����؂�ւ���
	if (Game_Mode != Next_Mode)
	{
		SceneManager_Initialize(Next_Mode);
	}
	

	//�e��ʂ̍X�V����
	switch (Game_Mode)
	{
		case E_TITLE;
			TitleScene_Update();
			break;
		case E_GAMEMAIN;
			GameMainScene_Update();
			break;
		case E_GAME_CLEAR;
			GameClearScene_Update();
			break;
		case E_GAME_OVER;
			GameOverScene_Update();
			break;
		default;
		    break;
	}
}


void SceneManager_Draw(void)
{
	//�e��ʂ̕`�揈��
	swith(Game_Mo)
}