/*
 * Ex6.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Admin
 */
#include "main.h"
void RunningEx6(int cnt){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, 0);
		switch(cnt){
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
			break;
		default:
			break;
		}
}

