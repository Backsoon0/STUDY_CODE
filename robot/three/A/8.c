#include<stdio.h>

struct Fraction
{
	int num; // 分子
	int den; // 分母
};

struct Fraction add (struct Fraction a,  struct Fraction b);    //加法
struct Fraction mul (struct Fraction a,  struct Fraction b);    //减法
struct Fraction Simplify(struct Fraction a);                    //化简
int Least_common_multiple(int a,int b);                         //最小公倍数
int greatest_common_divisor(int a,int b);                       //最大公约数

int main(void)
{
    struct Fraction fra1,fra2,addition,mulit;
    //输入
    scanf("%d/%d",&fra1.num,&fra1.den);
    scanf("%d/%d",&fra2.num,&fra2.den);
    //调用函数
    addition = add(fra1,fra2);
    mulit = mul(fra1,fra2);
    printf("%d/%d\n",addition.num,addition.den);
    printf("%d/%d",mulit.num,mulit.den);
    return 0;
}

struct Fraction add (struct Fraction a,  struct Fraction b)
{
    struct Fraction addition;
    //如果分母相等，直接让分子相加就行
    if (a.den == b.den)
    {
        addition.num = a.num + b.num;
        addition.den = a.den;
    }
    //如果不相等就先同分再相加
    else
    {
        int multiple = Least_common_multiple(a.den,b.den);
        addition.num = a.num * (multiple / a.den) + b.num * (multiple / b.den);
        addition.den = multiple;
    }
    addition = Simplify(addition);
    return addition;
}

struct Fraction mul (struct Fraction a,  struct Fraction b)
{
    struct Fraction mulit;
    //如果分母相等，直接让分子相减就行
    if (a.den == b.den)
    {
        mulit.num = a.num - b.num;
        mulit.den = a.den;
    }
    //如果不相等就先同分再相减
    else
    {
        int multiple = Least_common_multiple(a.den,b.den);
        mulit.num = a.num * (multiple / a.den) - b.num * (multiple / b.den);
        mulit.den = multiple;
    }
    mulit = Simplify(mulit);
    return mulit;
}

//还要求出最小公倍数
int Least_common_multiple(int a,int b)
{
    //将min等于最大的那个数
    int min = a;
    if (b > min)
    {
        min = b;
    }
    //将每一个都试一试
    while(1)
    {
        if (min % a == 0 && min % b ==0)
        {
            break;  //找出来才能退出循环
        }
        min++;
    }
    return min;
}

//我觉得还是要化简一下
struct Fraction Simplify(struct Fraction a)
{
    int min = greatest_common_divisor(a.den,a.num);
    a.den /= min;
    a.num /= min;
    return a;
}

//求出最大公约数
int greatest_common_divisor(int a,int b)
{
    //让min为最小的那个数
    int min = a;
    if (a < min)
    {
        min = b;
    }
    //一直遍历到一，直到找到为止
    while (min > 1)
    {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
        min--;
    }
    return min;
}