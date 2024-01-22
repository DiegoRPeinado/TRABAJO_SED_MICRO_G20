#include "controlPresencia.h"

uint32_t valor1 = 0;
uint32_t valor2 = 0;
uint32_t diferencia = 0;
uint8_t primerEvento = 0;
uint8_t distancia  = 0;

void controlPresencia(TIM_HandleTypeDef *htim)
{
	if (primerEvento==0) // if the first value is not captured
			{
				valor1 = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL); // read the first value
				primerEvento = 1;  // set the first captured as true
				// Now change the polarity to falling edge
				__HAL_TIM_SET_CAPTUREPOLARITY(htim, TIM_CHANNEL, TIM_INPUTCHANNELPOLARITY_FALLING);
			}

			else if (primerEvento==1)   // if the first is already captured
			{
				valor2 = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL);  // read second value
				__HAL_TIM_SET_COUNTER(htim, 0);  // reset the counter

				if (valor2 > valor1)
				{
					diferencia = valor2-valor1;
				}

				else if (valor1 > valor2)
				{
					diferencia = (0xffff - valor1) + valor2;
				}

				distancia = diferencia * .034/2;
				//distancia = diferencia;
				primerEvento = 0; // set it back to false

				// set polarity to rising edge
				__HAL_TIM_SET_CAPTUREPOLARITY(htim, TIM_CHANNEL, TIM_INPUTCHANNELPOLARITY_RISING);

			}
}
