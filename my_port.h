#ifndef __MY_PORT_H__
#define __MY_PORT_H__
#include "my_bsp.h"

#define isEPD_W21_BUSY GPIO_ReadOutputDataBit(GPIOE, PAPER_BUSY_Pin) 

void EPD_Dis_Part(unsigned char xStart,unsigned char xEnd,unsigned long yStart,unsigned long yEnd,unsigned char *DisBuffer,unsigned char Label);
void EPD_Dis_Full(unsigned char *DisBuffer,unsigned char Label);
void EPD_init_Full(void);
void EPD_init_Part(void);

void EPD_W21_Init(void);
void EPD_W21_WriteCMD(unsigned char command);
#endif

