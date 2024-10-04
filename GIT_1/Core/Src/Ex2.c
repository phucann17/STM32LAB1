/*
 * Ex2.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Admin
 */
#include "main.h"
void RunningEx2(int cnt){
	if (cnt == 9){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		}

	if (cnt == 4){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		}

	if (cnt == 1){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		}
}
