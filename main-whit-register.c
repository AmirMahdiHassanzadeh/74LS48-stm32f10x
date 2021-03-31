
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
#include "sevenSegmentConfig.h"
#include "timerInit.h"

uint16_t i=0 ;
float number = 0.1;
void TIM1_UP_IRQHandler(void);


int main(void)
{
	TIMER_CLOCK_ENR();
	TIMER_INIT();
	CLOCK_PORT_EN();//15us for interrupt
	SEVENSEGMENT_INIT();
	
	NVIC_EnableIRQ(TIM1_UP_IRQn);
	
	while(1)
	{
		
		
		for(int k =0 ; k<1100; k++)
			for(int j=0 ; j<1000;j++)
						__NOP();
		number+=0.1;
		
	}
		
	
	
	
}

void TIM1_UP_IRQHandler(void)
{
	if(TIM1 ->SR & (TIM_SR_UIF))
	{
		SHOW_FLOAT_VALUE_IN_SEVENSEGMENT(number,&i);
		(i>=3)?i=0:i++;
		TIM1->SR &=~(1<<0);
	}
}
