/*
 * ex5.c
 *
 *  Created on: Sep 27, 2024
 *      Author: thuyh
 */
#include "ex5.h"
void ex5_init(){
	SetTimerForTimerSet(0, 500,10);
}
void ex5_run(){
	if(timer1_flag[0] == 1){
		HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
		SetTimerForTimerSet(0, 500,10);
	}
}
