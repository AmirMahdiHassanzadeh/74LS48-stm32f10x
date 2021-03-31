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
#ifndef _SEVENSEGMENT_H
#define _SEVENSEGMENT_H

#include <stdint.h>


#define SEVENSEGGMENT_WITH_74LS48   1
#define USE_HAL_LIB     			1

#if(USE_HAL_LIB)
	#include "main.h"
#else 
	#include "stm32f10x.h"
#endif



#define _GPIOA_CLOCK     1
#define _GPIOB_CLOCK     0
#define _GPIOC_CLOCK     0 
#define _GPIOD_CLOCK     0
#define _GPIOE_CLOCK     0






		#define _SEVEN_SEGMENT_CONTOROL_PORT_1      		GPIOA
		#define _SEVEN_SEGMENT_CONTOROL_PIN_1       		0

		#define _SEVEN_SEGMENT_CONTOROL_PORT_2      		GPIOA
		#define _SEVEN_SEGMENT_CONTOROL_PIN_2       		1

		#define _SEVEN_SEGMENT_CONTOROL_PORT_3      		GPIOA
		#define _SEVEN_SEGMENT_CONTOROL_PIN_3       		2

		#define _SEVEN_SEGMENT_CONTOROL_PORT_4      		GPIOA
		#define _SEVEN_SEGMENT_CONTOROL_PIN_4       		3
		
		
		
#if (SEVENSEGGMENT_WITH_74LS48)
		#define _SEVEN_SEGMENT_74LS48_PORT_1        		GPIOA
		#define _SEVEN_SEGMENT_74LS48_PIN_1         		4

		#define _SEVEN_SEGMENT_74LS48_PORT_2        		GPIOA
		#define _SEVEN_SEGMENT_74LS48_PIN_2         		5

		#define _SEVEN_SEGMENT_74LS48_PORT_4        		GPIOA
		#define _SEVEN_SEGMENT_74LS48_PIN_4         		6

		#define _SEVEN_SEGMENT_74LS48_PORT_8        		GPIOA
		#define _SEVEN_SEGMENT_74LS48_PIN_8         		7
	#endif



		#define _SEVEN_SEGMENT_DOT_POINT_CONTOROL_PORT 	GPIOA
		#define _SEVEN_SEGMENT_DOT_POINT_CONTOROL_PIN  	8
		

#endif
