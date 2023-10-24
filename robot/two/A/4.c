#include<stdio.h>
#include<stdbool.h>

bool check(int a, int b, int c)
{
	bool er = false;
	if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
	{
		er = true;
	}
	return er;
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(check(a,b,c))
	{
		printf("直角三角形");
	}
	else
	{
		printf("不是直角三角形");
	}
	return 0;
}
