#pragma once
/* ------------------------------------------------------------------------- */
/* SonicSensor.h														 */
/* �����g�Z���T���狗����cm�P�ʂŎ擾����									 */
/* �V���O���g���Œ�`														 */
/* ------------------------------------------------------------------------- */
/* �ԍ�	�X�V����								���t		   ����			 */
/* 000000	�V�K�쐬							2022/07/14     �����@�C��	 */
/* ------------------------------------------------------------------------- */
/* Secure �錾																 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* Include File																 */
/* ------------------------------------------------------------------------- */
#include"system.h"                              /* system.h���s��            */

/* ------------------------------------------------------------------------- */
/* Define�錾																 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* �\���̒�`																 */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* Class��`																 */
/* ------------------------------------------------------------------------- */
class SonicSensor {
private:


public:

    SonicSensor();                         /* �R���X�g���N�^            */
    ~SonicSensor();                        /* �f�X�g���N�^              */
    uint16_t getDistance();                      /* �����̎擾                */
    int8_t  inti();                             /* �����ݒ�                  */
/*
    static SonicSensor& getInstance()
    {
        static SonicSensor SonicSensor_;	// インスタンスの生成 
        return SonicSensor_;
    }*/
};
/* ------------------------------------------------------------------------- */
/*              Copyright HAL Collage of Technology & Design                 */
/* ------------------------------------------------------------------------- */
