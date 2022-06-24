/*
 * @Author: 番茄 12385774@qq.com
 * @Date: 2022-06-24 16:45:48
 */
#include "delay.h"
void Delay1ms() //@11.0592MHz
{
    unsigned char i, j;

    _nop_();
    i = 2;
    j = 199;
    do
    {
        while (--j)
            ;
    } while (--i);
}
void delay_ms(unsigned char dat)
{
    while (dat--)
    {
        Delay1ms();
    }
}