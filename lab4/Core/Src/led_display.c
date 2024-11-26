/*
 * led_display.c
 *
 *  Created on: Nov 20, 2024
 *      Author: USER
 */

#include "led_display.h"
#include"main.h"

void led1(){
	HAL_GPIO_TogglePin(LED1_GPIO_Port,LED1_Pin);
}

void led2(){
	HAL_GPIO_TogglePin(LED2_GPIO_Port,LED2_Pin);
}

void led3(){
	HAL_GPIO_TogglePin(LED3_GPIO_Port,LED3_Pin);
}

void led4(){
	HAL_GPIO_TogglePin(LED4_GPIO_Port,LED4_Pin);
}

void led5(){
	HAL_GPIO_TogglePin(LED5_GPIO_Port,LED5_Pin);
}

void led_4_test(){
	HAL_GPIO_TogglePin(LED_4_test_GPIO_Port, LED_4_test_Pin);
}
