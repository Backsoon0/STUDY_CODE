#include<stdio.h>

//a为四舍五入之前的数，b为四舍五入之后的数 
int round(double a)
{
	int b;
	int zhe_shu = (int)a;
	double xiao_shu_wei = a - zhe_shu;
	if(xiao_shu_wei<0.5)
	{
		b = a;
	}
	else
	{
		b = a+1;
	}
	return b;
}

int main()
{
	double a;
	int b;
	scanf("%lf",&a);
	if(a<0)
	{
		a = -a;
		b = round(a);
		b = -b;
	}
	else
	{
		b = round(a);
	}
	printf("%d",b);
	return 0;
}
