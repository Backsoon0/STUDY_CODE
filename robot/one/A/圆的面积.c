#include<stdio.h>

int main()
{
    float ban_jin = 10.2;
    double PI = 3.1415926;
    double mian_ji = PI * ban_jin * ban_jin;    //求出面积 
    printf("%.2lf", mian_ji);    //因为输出是两位小数 
    return 0;
}
