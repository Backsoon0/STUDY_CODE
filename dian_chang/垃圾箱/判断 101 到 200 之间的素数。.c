#include<stdio.h>

int main()
{
	int number = 101;
	while(number<=200)
	{
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
			printf("%d\n", number);
		}
		number++;
	}
}
