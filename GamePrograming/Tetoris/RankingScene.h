#pragma once

//マクロ定義
#define RANKING_INPUT_MODE (1)
#define RANKING_DISP_MODE  (2)

//プロトタイプ宣言
int RankingScene_Initilize(void);
void RankingScene_Update(void);
void RankingScene_Draw(void);

void Set_RankingMode(int mode);
void Set_RankingScore(int score);