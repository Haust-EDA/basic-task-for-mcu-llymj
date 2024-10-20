#include <REGX52.H>

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
while(1)
  {
    P2=0XFE;//1111 1110
    Delay500ms();
    P2=0XFD;//1111 1101
    Delay500ms();
    P2=0XFB;1111 1011
    Delay500ms();
    P2=0XF7;1111 0111
    Delay500ms();
    P2=0XEF;1110 1111
    Delay500ms();
    P2=0XDF;//1101 1111
    Delay500ms();
    P2=0XBF;//1011 1111
    Delay500ms();
    P2=0X7F;//0111 1111
    Delay500ms();
  } 
    return 0;
}
}

