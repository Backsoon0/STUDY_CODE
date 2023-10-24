#include<stdio.h>

int main()
{
	int number;
	int sum = 0;
	for(number = 1;number <= 20;number++)
	{
		int t;
		int x = 1;
		t = number;
		while(t > 0)
		{
			x *= t;
			t--;
		}
		sum += x;
	}
	printf("%d", sum);
}
