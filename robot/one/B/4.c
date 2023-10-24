#include<stdio.h>

int main()
{
	const int number = 1000;
	int Prime[1000];
	int i,j;
	//假设都为素数 
	for(i = 0;i<number;i++)
	{
		Prime[i] = 1;
	}
	//i是素数，j是倍数 
	for(i = 2;i<number;i++)
	{
		if(Prime[i])
		{
			for(j = 2;i*j<number;j++)
			{
				Prime[i*j] = 0;	//他们两相乘的数都不是素数 
			}
		}
	}
	for(i = 2;i<number;i++)
	{
		if(Prime[i])
		{
			printf("%d\n",i);	//打印素数 
		}
	}
}
