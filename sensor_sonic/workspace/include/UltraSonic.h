#pragma once
/* ------------------------------------------------------------------------- */
/* UltraSonic.h     														 */
/* 障害物からの距離を取得する            									 */
/* シングルトンで定義														 */
/* ------------------------------------------------------------------------- */
/* 番号	更新履歴								日付		   氏名			 */
/* 000000	新規作成							2022/07/14     筈尾　辰也	 */
/* ------------------------------------------------------------------------- */
/* Secure 宣言																 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* Include File																 */
/* ------------------------------------------------------------------------- */
#include"system.h"                              /* system.hが不明            */
#include "UltraSonicSensor.h"

/* ------------------------------------------------------------------------- */
/* Define宣言																 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* 構造体定義																 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* Class定義																 */
/* ------------------------------------------------------------------------- */
class UltraSonic {
private:

    static UltraSonic* instance;                /* インスタンスのポインタ    */

    int16_t prevDisC;                           /* 前回の距離(CM)            */
    int16_t critDis;                            /* 基準となるCM              */
    float   prevMorter;                         /* 前回のモータのエンコーダ  */


    UltraSonic();                               /* コンストラクタ            */
    int8_t  calc();                             /* 平均化してmm単位で取得    */

public:

    int16_t distanceC;                          /* 距離情報(CM)            　*/
    int16_t distanceM;                          /* 距離情報(MM)            　*/

    ~UltraSonic();                              /* デストラクタ              */
    static UltraSonic* getInstance();           /* インスタンスの作成        */
    int16_t getDistance();                      /* 距離の取得                */
    int8_t  update();                           /* distance更新              */
};
/* ------------------------------------------------------------------------- */
/*              Copyright HAL Collage of Technology & Design                 */
/* ------------------------------------------------------------------------- */

