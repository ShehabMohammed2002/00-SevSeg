/*
 *  File : SevSeg_prg.c
 *  DATE: 6/9/2022
 *  Author: Shehab aldeen
 *  Version : V1
 *  Describtion : --------------
 */
 
#include"../LIB/STD_TYPES.h"
#include"../LIB/Bit_math.h"
#include"DIO_interface.h"
#include"SevSeg_Interface.h"
#include"SevSeg_Private.h"
#include"SevSeg_cfg.h"

u8 SevSeg_prg_num[10] = {ZERO,ONE ,TWO ,THREE,FOUR,FIVE,SEX ,SEVEN,EIGHT,NINE};

void SevSeg_VidDisplayNum(u8 Copy_U8Port , u8 Copy_U8Num ) {
	#if SEG_TYPE == COM_KA
	DIO_VidSetPortValue( Copy_U8Port , SevSeg_prg_num[Copy_U8Num] );
	#elif SEG_TYPE == COM_ANA
	DIO_VidSetPortValue( Copy_U8Port , ~( SevSeg_prg_num[Copy_U8Num] ) );
	#else 
	   #erorr "worng input"
	#endif
}
