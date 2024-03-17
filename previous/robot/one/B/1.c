#include<stdio.h>

int main()
{
	int num[3];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);	//输入 
	int max = num[0],min = num[0];
	int i;
	//选取最大最小值 
	for(i = 1;i<3;i++)
	{
		if(num[i] > max)
		{
			max = num[i];
		}
		if(num[i] < min)
		{
			min = num[i];
		}
	}
	printf("和：%d，差：%d，积：%d，商：%lf",max + min,max - min,max*min,1.0*max/min);	//输出 
	
}
