#include<stdio.h>

int main()
{
	double number;
	double sum = 0;
	for(number = 1;number <= 20;number++)
	{
		int t;
		double x = 1;
		t = number;
		while(t > 0)
		{
			x *= t;
			t--;
		}
		sum += x;
	}
	printf("%lf", sum);
}
