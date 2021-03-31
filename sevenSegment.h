/*
    ::IRAN
    by :AmirMahdiHassanzadeh
    1400/1/11
    2021/3/31
    myPhone :09211710114
    instagram id:@mahdi_attwi
    telegram id:@Amir_mehdi_attwi
    ::IRAN
*/
#ifndef  _SEVEN_SEGMENT_H
#define _SEVEN_SEGMENT_H
#include "sevenSegmentConfig.h"

void CLOCK_PORT_EN(void);
void SEVENSEGMENT_INIT(void);
char BCD_NUMBER_MOVE_TO_74LS48(uint8_t num);
void SHOW_VALUE_IN_SEVENSEGMENT(uint16_t num,uint16_t *selector);
void SHOW_FLOAT_VALUE_IN_SEVENSEGMENT(float Floatnum,uint16_t *selector);



#endif

