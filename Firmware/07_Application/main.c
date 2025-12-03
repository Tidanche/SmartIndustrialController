#include "main.h"

int main()
{
	System_Init();
	led_init();

	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_RESET);

	while (1)
		;
	return 0;
}


// void SysTick_Handler(void)
// {
//     HAL_IncTick();
// }
