#include "system_init.h"

void System_Init(void)
{
    HAL_Init();
}

void Error_Handler(void)
{
    while(1);
}