#include<stdio.h>

int add (int a, int b);

int main()
{
    int a = 7,b = -5;
    int c = add(a,b);
    printf("%d",c);
    return 0;
}

// 不使用算数运算实现两数相加
int add (int a, int b) 
{
    // 两个数的和等于两个数不进位相加和进位相加的和
    // a ^ b 得到的就是两数不进位相加的和
    // (a & b) << 1 得到的就是两数只相加进位的值

    // 一直循环至进位值为0计算结束
    int sum = a;
    while (b != 0) {
        sum = a ^ b;
        b = (a & b) << 1;
        a = sum;
    }
    return sum;
}
