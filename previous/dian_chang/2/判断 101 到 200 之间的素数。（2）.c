#include<stdio.h>

int main()
{
	int number = 101;
	do{
		scanf("%d", &number);
	}while(number<=100||number>200);
	int i;
	int isPrime = 1;
	for(i = 2;i < number; i++)
	{
		if(number % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if(isPrime == 1)
	{
		printf("是素数.");
	}else
	{
		printf("不是素数.");
	}
	number++;

}
