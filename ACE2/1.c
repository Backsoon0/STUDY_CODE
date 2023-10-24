#include<stdio.h>
#include<math.h>

int addition(int a,int b);
int add(int a,int b);

int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    //拆分整数位和小数位
    int number_a,number_b,f_a,f_b;
    number_a = (int)a;
    number_b = (int)b;
    a -= number_a;
    b -= number_b;
    f_a = a*100;
    f_b = b*100;
    double sum = addition(number_a,number_b) + addition(f_a,f_b) * 0.01;
    printf("%lf",sum);
    return 0;
}

//查了网上的，又简洁又好看
int addition(int a,int b)
{
    int sum;
    sum = a^b;    //没有进一的相加
    //再让他们结合在一起,让进位的和与不进位的和相加，直到进位消失为止
    while (b)
    {
        sum = a ^ b;   
        b = (a&b)<<1;    //逢二进一
        a = sum;    //没有进一的相加
    }
    
    return sum;
}

//我写的垃圾
int add(int a,int b)
{
    int sum,temp;
    int jin_wei = (a&b)<<1;    //逢二进一
    sum = a ^ b;   
    jin_wei = (a&b)<<1;    //逢二进一
    //这里似乎变成jin_wei和sum相加了
    while (jin_wei)
    {
        sum = jin_wei ^ sum;
        jin_wei = (jin_wei&temp)<<1;    //这个要用原来的sum
        temp = sum;
    }
    return sum;
}