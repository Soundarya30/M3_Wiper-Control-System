#include"Wiper_Control_System.h"
#include<stdio.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"


void Init_LEDs(void);
void Delay(volatile int time);
int main(void)
{
Init_LEDs();
static int Switch_count=0;
while(1)
{
  if(Switch_count=1) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Delay(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Delay(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Delay(10000);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Delay(10000);
  }
  if(Switch_count=2) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Delay(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Delay(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Delay(2500);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Delay(2500); 
	}
  if(Switch_count=3) 
  {
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
  Delay(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_15);
  Delay(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
  Delay(1250);
  HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
  Delay(1250); 
   }
}
}

void Init_LEDs(void)
{
	 __HAL_RCC_GPIOD_CLK_ENABLE();
	GPIO_InitTypeDef LEDs_on_board;
	LEDs_on_board.Mode = GPIO_MODE_OUTPUT_PP;
        LEDs_on_board.Pin = GPIO_PIN_14;
        LEDs_on_board.Pin = GPIO_PIN_15;
        LEDs_on_board.Pin = GPIO_PIN_12;
        LEDs_on_board.Pin = GPIO_PIN_13;
	HAL_GPIO_Init(GPIOD, &LEDs_on_board);
}
void Delay(volatile int time)
{
	int j;
        for(j = 0; j < time*4000; j++)
        {};
}
