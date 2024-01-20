
#ifndef INC_CONTROLSERVO_H_
#define INC_CONTROLSERVO_H_

#include "stm32f4xx_hal.h"


// Definiciones de pines y periféricos para los servos
//#define MOTOR_TIM_HANDLE htim2
#define MOTOR_TIM_CHANNEL TIM_CHANNEL_4
#define MOTOR_PORT GPIOD
#define MOTOR_PIN1 GPIO_PIN_9
#define MOTOR_PIN2 GPIO_PIN_8


void subirPersianas(TIM_HandleTypeDef handler);
void pararPersianas(TIM_HandleTypeDef handler);
void bajarPersianas(TIM_HandleTypeDef handler);

#endif /* INC_CONTROLSERVO_H_ */
