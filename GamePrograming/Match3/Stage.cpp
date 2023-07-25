#include"Stage.h"
#include"DxLib.h"
#include"InputControl.h"

#define HEGHT              (12)    //ブロック配置サイズ(高さ)
#define WIDTH              (12)    //ブロック配置サイズ(幅)
#define BLOCKSIZE          (48)    //ブロックサイズ
#define BLOCK_IMAGE_MAX    (10)    //ブロック画像数

#define ITEM_MAX           (8)     //アイテム最大数

#define SELECT_CURSOR      (0)
#define NEXT_CURSOR        (1)
#define TMP_CURSOR         (2)

typedef struct
{
	int flg;
	int x, y;
	int width, height;
	int image;
	int backup;
}T_bject;



typedef struct
{
	int x;
	int y;
}T_CURSOR;
enum 
{
	E_NONE,
	E_ONCE,
	E_SECOND
};