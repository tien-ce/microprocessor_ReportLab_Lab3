/*
 * ex10.c
 *
 *  Created on: Oct 21, 2024
 *      Author: thuyh
 */
#include "ex10.h"
int my_index;
void ex10_init(){
	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,RESET);
	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
	  automatic_init();
	  setTimer1(3, 500);
	  setTimer1(1, 1000);
}
void ex10_run(){
	  if(timer1_flag[3] == 1){
		  setTimer1(3, 500);
		  my_index = 1-my_index;
	  }
	  update_buffer();
	  updateTime();
	  update_Display();
	  automatic_run();
	  manual_run();
}

