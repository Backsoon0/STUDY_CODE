#include<stdio.h>

int main()
{
    int num,i;
    int sum = 0;
    scanf("%d", &num);
    for(i=1;i<=num;i++)	//��1ѭ����num 
    {
        sum+=i;	//ѭ���Լ���i 
    }
    printf("1+2+3+...+%d = %d",num, sum);
    return 0;
}
