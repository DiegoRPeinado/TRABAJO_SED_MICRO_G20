
#ifndef INC_CONTROLSERVO_H_
#define INC_CONTROLSERVO_H_

#include "stm32f4xx_hal.h"

// Definiciones de pines y periféricos para los servos
#define SERVO_TIM_HANDLE htim2
#define SERVO_TIM_CHANNEL TIM_CHANNEL_4

// Función para mover el servo con un sentido específico
void movServo(TIM_TypeDef *tim, uint8_t sentido);

#endif /* INC_CONTROLSERVO_H_ */
