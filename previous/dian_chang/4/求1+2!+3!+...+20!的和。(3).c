#include<stdio.h>

int main()
{
	long long number;
	long long sum = 0;
	for(number = 1;number <= 20;number++)
	{
		int t;
		long long x = 1;
		t = number;
		while(t > 0)
		{
			x *= t;
			t--;
		}
		sum += x;
	}
	printf("%lld", sum);
}
