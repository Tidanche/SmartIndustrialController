#include "bsp_led.h"


// PC0:LED0 ; PC2:LED1 ; PC3:LED2
void led_init(void)
{
	GPIO_InitTypeDef GPIO_Init_Structure;
	__HAL_RCC_GPIOC_CLK_ENABLE(); // 开启GPIOC时钟

	GPIO_Init_Structure.Pin = GPIO_PIN_0 | GPIO_PIN_2 | GPIO_PIN_3;
	GPIO_Init_Structure.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_Init_Structure.Pull = GPIO_PULLUP;
	GPIO_Init_Structure.Speed = GPIO_SPEED_FREQ_VERY_HIGH;

	HAL_GPIO_Init(GPIOC, &GPIO_Init_Structure);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_SET);		// LED0
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_SET);		// LED1
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_SET);		// LED2
}
