#include"DxLib.h"
#include"InputControl.h"


int old_button;
int now_button;
int mouse_position_x;
int mouse_position_y;

void Input_Initialize(void)
{
	old_button = NULL;
	now_button = NULL;
	mouse_position_x = NULL;
	mouse_position_y = NULL;
}