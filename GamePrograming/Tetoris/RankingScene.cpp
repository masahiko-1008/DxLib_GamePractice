#include "RankingScene.h"
#include "DxLib.h"
#include "InputControl.h"
#include "SceneManager.h"

//マクロ定義

#define RANKING_FILE  ("dat/rankingdate.csv")
#define RANKING_MAX  (10)
#define RANKING_NAME_LEN  (11)

//型定義

typedef struct
{
	int rank;  //ランク
	char name[RANKING_NAME_LEN];  //名前
	int score;  //スコア
}T_RANKING;

typedef struct
{
	int x;
	int y;
}T_CURSOR;

//グローバル変数宣言

T_RANKING Ranking_Date[RANKING_MAX];  //ランキングデータ
T_RANKING New_Score;  //新しいスコアデータ
int DispMode;  //表示モード

T_CURSOR Cursor;  //カーソル用変数
int name_num;

//プロトタイプ宣言

//void file_read(void);  //ファイル読み込み
//void file_write(void)  //ファイル書き込み
//void ranking_sort(void)  //ランキングソート処理