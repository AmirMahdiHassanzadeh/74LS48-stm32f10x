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

#include "timer-whit-register.h"
void TIMER_CLOCK_ENR(void)
{
	RCC->APB2ENR |=(1<<11);//Enable TIMER1 Clock in BUS APB2
}
void TIMER_INIT(void)
{
	TIM1->CR1 |= (1<<0);
	
	TIM1->PSC=(8000-1);
	TIM1->ARR =1;
	TIM1->SR &=~(1<<0);
	
	TIM1->DIER |=(1<<0);
	
	
}


