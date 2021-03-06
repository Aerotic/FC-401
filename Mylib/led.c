#include "led.h"

void Led_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
    
	RCC_AHB1PeriphClockCmd(RCC_LED , ENABLE );
	GPIO_InitStructure.GPIO_Pin = LED_Pin_One | LED_Pin_Two | LED_Pin_Three | LED_Pin_Four ;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_Init(LED_PORT,&GPIO_InitStructure);
}