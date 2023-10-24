#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    //判断是否能被2整除，如果能，则为偶数，否则为奇数 
	if(a%2 == 0)
    {
        printf("为偶数");
    }
    else
    {
        printf("为奇数");
    }
    return 0;
}
