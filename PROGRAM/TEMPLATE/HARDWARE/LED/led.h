#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
//#define LED0 PAout(5)	// PA5
//#define LED1 PAout(6)	// PA6	

#define LED0_Toggle HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5) 	// PA5
#define LED1_Toggle HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_6)	// PA6	

void LED_Init(void);//初始化

		 				    
#endif
