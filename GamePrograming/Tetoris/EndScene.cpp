#include"EndScene.h"
#include"DxLib.h"

int wait_count;

//�G���h��ʁF����������
//�����F�Ȃ�
//�߂�l�F�G���[���(-1�F�ُ�L,-1�ȊO�F����)

int EndScene_Initialize(void)
{
	int ret = 0;

	wait_count = 0;

	return ret;
}

//�G���h��ʁF�X�V����
//�����F�Ȃ�
//�߂�l�F�Ȃ�

void EndScene_Update(void)
{
	wait_count++;
}

//�G���h��ʁF�`�揈��
//����:�Ȃ�
//�߂�l:�Ȃ�

void EndScene_Draw(void)
{
	DrawString(10, 10, "�G���h��ʂł�", GetColor(255, 255, 255));
}

//�G���h��ʁF�I���m�F����
//�����F�Ȃ�
//�߂�l�F�Ȃ�

int Get_EndTime(void)
{
	if (wait_count > 300)
	{
		return TRUE;
	}
	return FALSE;
}