#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)    //打几阶，就循环几次
    {
        for (int j = 1; j <= i; j++)    //j<=i是因为j不能超过i
        {
            printf("%d*%d=%-4d",j,i,i*j);
        }
        printf("\n");   //每打完一阶就换行
    }
    return 0;
}