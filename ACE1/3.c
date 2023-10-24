#include<stdio.h>

int main()
{
    int x,y,t;
    scanf("%d %d %d",&x,&y,&t);
    //数学计算问题
    int false_starts = x*t;
    double hero_t = 1.0 * false_starts / (y-x);
    double distance = y * hero_t;
    printf("%d",(int)distance);
}