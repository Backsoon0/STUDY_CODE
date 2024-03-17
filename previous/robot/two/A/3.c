#include<stdio.h>

int test(int a, int b, int c)
{
	int square_sum = a*a+b*b+c*c;
	return square_sum;
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int ss = test(a,b,c);
	printf("%d",ss);
	return 0;
}
