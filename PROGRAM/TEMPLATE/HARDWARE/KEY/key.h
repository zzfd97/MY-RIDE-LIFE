#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK miniSTM32开发板
//按键驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/3
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////   	 


//#define KEY0 PCin(5)   	
//#define KEY1 PAin(15)	 
//#define WK_UP  PAin(0)	 
 

/*下面的方式是通过直接操作 HAL 库函数方式读取 IO*/
//#define KEY0 HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_3) //KEY0 按键 PH3
//#define KEY1 HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_2) //KEY1 按键 PH2
#define KEY2 HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13) //KEY2 按键 PC13     ---->对应NUCLEO-L476中的USER键
#define WK_UP HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) //WKUP 按键 PA0
///*下面的方式是通过位带操作方式读取 IO*/
//#define KEY0 PHin(3) //KEY0 按键 PH3
//#define KEY1 PHin(2) //KEY1 按键 PH2
//#define KEY2 PCin(13)//KEY2 按键 PC13
//#define WK_UP PAin(0) //WKUP 按键 PA0

#define KEY2_PRES 3
#define WKUP_PRES 4  

void KEY_Init(void);//IO初始化
u8 KEY_Scan(u8 mode);  	//按键扫描函数					    
#endif
