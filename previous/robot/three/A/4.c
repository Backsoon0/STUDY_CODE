#include<stdio.h>

int exchange(int number);

int main()
{
    int number;
    printf("输入一个正整数:\n");
    scanf("%d",&number);
    int ex = exchange(number);
    printf("十进制数%d转化为二进制为:\n%d",number,ex);
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