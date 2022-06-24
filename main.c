/*
 * @Author: 番茄 12385774@qq.com
 * @Date: 2022-06-24 16:40:05
 */

#include <reg51.H>
#include "delay.h"
#include "key.h"
#include "lcd12864.h"

sbit led = P2 ^ 2;
void main()
{
    Lcd_Init();
    Lcd_Clear();
    while (1)
    {
        if (key_cont(key1) == 1)
        {
            led = 0;
        }
        if (key_cont(key2) == 1)
        {
            led = 0;
        }
        Lcd_Show_String(0, 0, "hello,world!");
    }
}