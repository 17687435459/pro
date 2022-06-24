/*
 * @Author: 番茄 12385774@qq.com
 * @Date: 2022-06-24 16:40:05
 */

#include <REG51.H>
#include "delay.h"

sbit led = P2 ^ 2;
int main()
{
    while (1)
    {
        led=!led;
        delay_ms(10);
        led=!led;
    }
}