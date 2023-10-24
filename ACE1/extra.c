#include<stdio.h>

int exchange(int number);
int Inverse(int number);

int main(void)
{
    int number;
    scanf("%d",&number);
    int two_d = 0;
    //判断正负
    if(number < 0)
    {
        //是负的就加1000000
        two_d += 10000000;
        number *= -1;
        int source = two_d + exchange(number);
        printf("%d\n",source);
        int Inverse_code = two_d + Inverse(number);
        printf("%d\n",Inverse_code);
        //因为我反过来了，所以这里得减一
        printf("%d",two_d + Inverse(number - 1));
    }
    else
    {
        //正数这三个都一样
        int source = two_d + exchange(number);
        printf("%d\n",source);
        printf("%d\n",source);
        printf("%d",source);
    }
    return 0;
}

//十进制转换
int exchange(int number)
{
    int two = 0;
    //根据十进制转换为二进制
    /*    5/2=2...1
          2/2=1...0
          1/2=0...1
          5的二进制为101*/
    for(int i = 1; i < 10000000; i *= 10)
    {
        int unit = number%2;
        number /= 2;
        if(unit == 1)
        {
            two += i;
        }

    }
    return two;
}

//反码
int Inverse(int number)
{
    int two = 0;
    for(int i = 1; i < 10000000; i *= 10)
    {
        int unit = number%2;
        number /= 2;
        //唉，我反过来就可以了吧
        if(unit == 0)
        {
            two += i;
        }

    }
    return two;
}