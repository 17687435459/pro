/*
 * @Author: 番茄 12385774@qq.com
 * @Date: 2022-06-24 17:22:02
 */
//
// Created by lenovo' on 2022/6/22.
//

#include "key.h"

unsigned char key(){
    static unsigned char flog=0;
    unsigned char dat=0,i=0;
    if(key1==0){
        Delay1ms();
        if(key1==0){
            while ((key1==1)&&(i<200)){ delay_ms(3);i++;}
            if(i<200){
                if(flog==1){
                    dat=0;
                    flog=0;
                } else
                    dat=1;
            } else{
                dat=2;flog=1;
            }

        }
    }
    return (dat);
}
unsigned char key_cont(unsigned char date){
    static unsigned char flog=0;
    unsigned char dat=0,i=0;
    if(date==0){
        Delay1ms();
        if(date==0){
            while ((date==1)&&(i<200)){ delay_ms(3);i++;}
            if(i<200){
                if(flog==1){
                    dat=0;
                    flog=0;
                } else
                    dat=1;
            } else{
                dat=2;flog=1;
            }

        }
    }
    return (dat);
}
