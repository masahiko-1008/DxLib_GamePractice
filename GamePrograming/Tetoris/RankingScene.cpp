#include "RankingScene.h"
#include "DxLib.h"
#include "InputControl.h"
#include "SceneManager.h"

//�}�N����`

#define RANKING_FILE  ("dat/rankingdate.csv")
#define RANKING_MAX  (10)
#define RANKING_NAME_LEN  (11)

//�^��`

typedef struct
{
	int rank;  //�����N
	char name[RANKING_NAME_LEN];  //���O
	int score;  //�X�R�A
}T_RANKING;

typedef struct
{
	int x;
	int y;
}T_CURSOR;

//�O���[�o���ϐ��錾

T_RANKING Ranking_Date[RANKING_MAX];  //�����L���O�f�[�^
T_RANKING New_Score;  //�V�����X�R�A�f�[�^
int DispMode;  //�\�����[�h

T_CURSOR Cursor;  //�J�[�\���p�ϐ�
int name_num;

//�v���g�^�C�v�錾

//void file_read(void);  //�t�@�C���ǂݍ���
//void file_write(void)  //�t�@�C����������
//void ranking_sort(void)  //�����L���O�\�[�g����