#include <reg52.h>
#include <stdio.h>
void
delayms( unsigned int ms) {
    unsigned int i,j;
    for(i = ms ; i > 0 ; i--) {
        for( j = 114 ; j > 0 ; j--);
    }
}//延时函数
void main()
{
    unsigned int i ;
    while (1)
    {
        unsigned char temp = 0x01;//引脚为低电平时灯亮
        for(i = 0 ; i < 8 ; i++) {
            P1 = ~temp;//temp状态是只有一个灯不亮，取反后只有一个灯亮
            delayms(500);
            temp = temp<<1;//左移一位相当于让第二个灯不亮
        }
    }
}
