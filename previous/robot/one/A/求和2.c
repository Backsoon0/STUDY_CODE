#include<stdio.h>

//д��ʱ��ͻȻ�뵽���еĹ�ʽ��(a1+an)*n/2
int main()
{
    int num,i;
    int sum = 0;
    scanf("%d", &num);
    sum = (1 + num)*num/2;
    printf("1+2+3+...+%d = %d",num, sum);
    return 0;
}
