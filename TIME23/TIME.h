#ifndef __TIME_H
#define __TIME_H	
#include "string.h"
#include "stm32f10x.h"
#include "stm32f10x_tim.h"
#include "misc.h"

extern unsigned int TIM_F;

void TIM2_Getsample_Int(u16 arr,u16 psc);

#endif
