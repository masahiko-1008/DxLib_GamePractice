#include"InputControl.h"
#include "DxLib.h"

//マクロ定義
#define XINPUT_BUTTON_MAX (16)  //コントローラーのボタン数

//型定義

enum KEY_STATE
{
	E_NONE,  //未入力
	E_CLICK,  //押した瞬間
	E_PRESS,  //押し続けてる
	E_RELEASED,  //離した
	E_KEY_STATE_MAX
};

//変数定義