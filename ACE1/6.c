#include<stdio.h>
#include<math.h>

int isPrime(int number);

int main()
{
    int count = 0;
    int n = 1;
    while (count < 7)   //找到7个奇妙数为止
    {
        //获得2的平方
        double number = pow(2.0,(double)n);
        //判断是否为素数
        if (isPrime((int)number - 1))
        {
            printf("%d %d\n",n,(int)number-1);
            count++;
        }
        n++;
    }
    return 0;
}

int isPrime(int number)
{
    int is_Prime = 1;
    //偶数当然不是素数啦
    if (number % 2 == 0)
    {
        is_Prime = 0;
    }
    //奇数也要分类讨论啦
    else
    {
        for (int i = 2; i < number; i++)    //网上说这里可以i<number的平方根，但我不知道为什么
        {
            if (number % i == 0)    //如果能被其他的数整除，则不是素数
            {
                is_Prime = 0;
                break;
            }
            
        }
        
    }
    return is_Prime;
}