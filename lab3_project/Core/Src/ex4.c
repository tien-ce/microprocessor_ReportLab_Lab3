/*
 * ex4.c
 *
 *  Created on: Sep 27, 2024
 *      Author: thuyh
 */
#include <ex4.h>
void ex4_init(){
	SetTimerForTimerSet(0, 400,10);
}
void ex4_run(){
	if(timer1_flag[0] == 1){
		HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
		SetTimerForTimerSet(0, 400,10);
	}
}
