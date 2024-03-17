#include<stdio.h>

int main()
{
	int number;
	int count = 100;
	int x;
	int bai,shi,ge;
	for(number=100;number<1000;number++)
	{
		x = number;
		ge = x % 10;
		x /= 10;
		shi = x % 10;
		x /= 10;
		bai = x;
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai == number)
		{
			printf("%d\n", number);
		}
	}
	return 0;
} 
