/*
 * @Author: 番茄 12385774@qq.com
 * @Date: 2022-06-24 17:22:14
 */
#ifndef _KEY_H_
#define _KEY_H_
#include <reg51.h>
#include "delay.h"
sbit key1=P3^2;
sbit key2=P3^3;
sbit key3=P3^4;
sbit key4=P3^5;


unsigned char key_cont(unsigned char date);

unsigned char key(); //独立按键
#endif