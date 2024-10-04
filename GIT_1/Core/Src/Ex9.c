/*
 * Ex9.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Admin
 */
#include "main.h"
void clearNumberOnClock(int num){
	if(num >= 0 && num <= 12){
	HAL_GPIO_WritePin(GPIOB,
				(num == 0) ? GPIO_PIN_11:
				(num == 1) ? GPIO_PIN_0:
				(num == 2) ? GPIO_PIN_1:
				(num == 3) ? GPIO_PIN_2:
				(num == 4) ? GPIO_PIN_3:
				(num == 5) ? GPIO_PIN_4:
				(num == 6) ? GPIO_PIN_5:
				(num == 7) ? GPIO_PIN_6:
				(num == 8) ? GPIO_PIN_7:
				(num == 9) ? GPIO_PIN_8:
				(num == 10) ? GPIO_PIN_9:
				(num == 11) ? GPIO_PIN_10:
				(num == 12) ? GPIO_PIN_11: 0,
				0);
	}
}
