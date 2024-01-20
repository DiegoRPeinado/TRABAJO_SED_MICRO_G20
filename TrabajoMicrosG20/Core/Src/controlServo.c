#include "controlServo.h"

void subirPersianas(TIM_HandleTypeDef handler)
{
	__HAL_TIM_SET_COMPARE(&handler, TIM_CHANNEL_4, 1000);
	HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN1,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN2,GPIO_PIN_RESET);
}
void pararPersianas(TIM_HandleTypeDef handler)
{
	__HAL_TIM_SET_COMPARE(&handler, TIM_CHANNEL_4, 1000);
	HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN1,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN2,GPIO_PIN_RESET);
}
void bajarPersianas(TIM_HandleTypeDef handler)
{
	__HAL_TIM_SET_COMPARE(&handler, TIM_CHANNEL_4, 1000);
	HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN1,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN2,GPIO_PIN_SET);
}
