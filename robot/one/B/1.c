#include<stdio.h>

int main()
{
	int num[3];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);	//���� 
	int max = num[0],min = num[0];
	int i;
	//ѡȡ�����Сֵ 
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
	printf("�ͣ�%d���%d������%d���̣�%lf",max + min,max - min,max*min,1.0*max/min);	//��� 
	
}
