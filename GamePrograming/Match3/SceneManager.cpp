#include"SceneManager.h"
#include"TitleScene.h"
#include"GameMainScene.h"
#include"GameClearScene.h"
#include"GameOverScene.h"


GAME_MODE Game_Mode;       //ゲームモード情報(現在)
GAME_MODE Nezt_Mode;       //ゲームモード情報(次）

int SceneManager_Initialize(GAME_MODE mode)
{
	int Read_Error;

	//シーン読み込み処理
	//タイトル画像
	Read_Error = TitleScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームメイン画面
	Read_Error = GameMainScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームクリア画面
	Read_Error = GameClearScene_Initialize();
	if (Read_Error == D_ERROR)
	{
		return D_ERROR;
	}

	//ゲームオーバー画面
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
		//前フレームとゲームモードが違っていたらシーンを切り替える
	if (Game_Mode != Next_Mode)
	{
		SceneManager_Initialize(Next_Mode);
	}
	

	//各画面の更新処理
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
	//各画面の描画処理
	swith(Game_Mo)
}