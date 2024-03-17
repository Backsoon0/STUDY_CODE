#include<stdio.h>

int sum_up(int number);
int product_up(int number);

int main()
{
    int number = 10;
    scanf("%d",&number);
    int sum = sum_up(number);
    int product = product_up(number);
    printf("%d\n",sum);
    printf("%d",product);
    return 0;
}

int sum_up(int number)  //1+2+...+n的和
{
    int sum = 0;
    if (number==1)  //结束条件
    {
        return number;
    }
    sum = number + sum_up(number-1);    //这里要想象成n+((n-1)+...+3+2+1)的和
    return sum;
}

int product_up(int number)  //这里和求和同理
{
    int product = 0;
    if (number==1)  //结束条件
    {
        return number;
    }
    product = number * product_up(number-1);    //这里想象成n*((n-1)*...*3*2*1)的积
    return product;
}