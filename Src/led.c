//
// Created by Mariot Tsitoara on 30/01/2021.
//

#include "main.h"
#include "led.h"

void on_strum(uint16_t interval) {
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_Delay(interval / 2);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_Delay(interval);
}

void on_wait() {
    uint32_t delay = 50;
    HAL_GPIO_TogglePin(GPIOE, LD10_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD9_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD7_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD5_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD3_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD4_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD6_Pin);
    HAL_Delay(delay);
    HAL_GPIO_TogglePin(GPIOE, LD8_Pin);
    HAL_Delay(delay);

    HAL_GPIO_WritePin(GPIOE, LD3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD7_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD8_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD9_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LD10_Pin, GPIO_PIN_RESET);
}
