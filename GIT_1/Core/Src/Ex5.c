/*
 * Ex5.c
 *
 *  Created on: Sep 14, 2024
 *      Author: Admin
 */
#include "main.h"
void RunningEx5(int cnt){
	if (cnt == 9){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5 | GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3 | GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 | GPIO_PIN_6, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1 | GPIO_PIN_7, 1);
	}

	if (cnt == 6){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1 | GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2 | GPIO_PIN_8, 1);
	}

	if (cnt == 4){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2 | GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3 | GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 | GPIO_PIN_6, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4 | GPIO_PIN_10, 1);
	}

	if (cnt == 1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4 | GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5 | GPIO_PIN_11, 1);
	}
}
