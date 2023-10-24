#include<stdio.h>

int main()
{
    int num,i;
    int sum = 0;
    scanf("%d", &num);
    for(i=1;i<=num;i++)	//从1循环到num 
    {
        sum+=i;	//循环自己加i 
    }
    printf("1+2+3+...+%d = %d",num, sum);
    return 0;
}
