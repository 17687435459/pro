/*
 * @Author: 番茄 12385774@qq.com
 * @Date: 2022-06-24 16:40:05
 */

#include <REG51.H>
#include "delay.h"
#include "key.h"

sbit led = P2 ^ 2;
void main()
{
    while (1)
    {
        if(key()==1){
            led=0;
            delay_ms(10);
            led=1;
        }
        if (key_cont(key2)==1)
        {
            led=0;
        }
        
    }
}