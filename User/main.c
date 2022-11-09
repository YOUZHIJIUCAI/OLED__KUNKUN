/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   2.4g无线模块/nrf24l01+/单板 测试  只使用一块开发板，
	*					 对2个NRF模块进行收发测试
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 F103 指南者开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
#include "stdio.h"
#include "stm32f10x.h"
#include "OLED_I2C.h"
#include "systick.h"
#include "TIME.h"
#include "kunkun.h"
unsigned int TIM_F=0;




u8 led_f=0;
char string[10];
float U=0;
u8 status;	               // 用于判断接收/发送状态
u8 status2;                // 用于判断接收/发送状态
u8 txbuf[32];	             // 发送缓冲
u8 rxbuf[32];			         // 接收缓冲
int i=0;

void Self_Test(void);

 /**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)                  
{   
	

	
	I2C_Configuration();
	
	OLED_Init();
	TIM2_Getsample_Int( 1999, 719);		//50ms任务定时中断
  /* 按键初始化 */

	Self_Test();	

}

 /**
  * @brief  NRF模块测试函数，NRF1和NRF2之间循环发送数据
  * @param  无
  * @retval 无
  */
void Self_Test(void)
{
	
	OLED_ON();
	OLED_CLS();
	//OLED_ShowStr(8,0,"hzn_fly",2);
	//OLED_ShowStr(1,0,">",2);
	
  while(1)
  {
		if(TIM_F>38) TIM_F=1;
		//OLED_CLS();
		switch(TIM_F)
		{
			case 1: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP1);break;
			case 2: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP2);break;
			case 3: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP3);break;
			case 4: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP4);break;
			case 5: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP5);break;
			case 6: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP6);break;
			case 7: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP7);break;
			case 8: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP8);break;
			case 9: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP9);break;
			case 10: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP10);break;
			case 11: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP11);break;
			case 12: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP12);break;
			case 13: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP13);break;
			case 14: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP14);break;
			case 15: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP15);break;
			case 16: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP16);break;
			case 17: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP17);break;
			case 18: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP18);break;
			case 19: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP19);break;
			case 20: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP20);break;
			case 21: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP21);break;
			case 22: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP22);break;
			case 23: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP23);break;
			case 24: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP24);break;
			case 25: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP25);break;
			case 26: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP26);break;
			case 27: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP27);break;
			case 28: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP28);break;
			case 29: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP29);break;
			case 30: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP30);break;
			case 31: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP31);break;
			case 32: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP32);break;
			case 33: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP33);break;
			case 34: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP34);break;
			case 35: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP35);break;
			case 36: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP36);break;
			case 37: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP37);break;
			case 38: OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP38);break;
		}
		//OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP17);
//		Delay_ms(50);
//		OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP2);
//		Delay_ms(50);
//		OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP3);
//		Delay_ms(50);
//		OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP4);
//		Delay_ms(50);
//		OLED_DrawBMP(0,0,64,8,(unsigned char*)BMP5);
//		Delay_ms(50);
		
   
	} 
  
}
  


/*********************************************END OF FILE**********************/

