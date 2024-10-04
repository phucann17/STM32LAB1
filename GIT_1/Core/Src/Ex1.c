/*
 * Ex1.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Admin
 */
#include "main.h"
void RunningEx1() {
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    HAL_Delay(2000);
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
}
