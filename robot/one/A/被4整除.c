#include<stdio.h>

int main()
{
    int a;
    for(a=1;a<=20;a++)	//1到20的循环 
    {
        if(a%4 == 0)	//判断能不能被4整除 
        {
            printf("%d\n", a);
        }
    }
    return 0;
}
