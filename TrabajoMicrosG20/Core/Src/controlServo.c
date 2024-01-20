#include "controlServo.h"

// Implementación de la función para mover el servo
void movServo(TIM_TypeDef *tim, uint8_t sentido)
{
	const uint16_t max= 300; //300 equivale a 90º en nuestro servo
	const uint16_t min=65;   // 65 equivale a -90º en nuestro servo.

	if(sentido==1){
		while (tim->CCR2 < max){  //300 equivale a 90º
			HAL_Delay(50);
			tim->CCR2 +=1;
		}
	}else{
		while (tim->CCR2 > min){   //65 equivale a -90º
			HAL_Delay(50);
			tim->CCR2 -=1;
		}
	}

}
