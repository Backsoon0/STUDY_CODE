#include<stdio.h>

int main()
{
	const int number = 1000;
	int Prime[1000];
	int i,j;
	//���趼Ϊ���� 
	for(i = 0;i<number;i++)
	{
		Prime[i] = 1;
	}
	//i��������j�Ǳ��� 
	for(i = 2;i<number;i++)
	{
		if(Prime[i])
		{
			for(j = 2;i*j<number;j++)
			{
				Prime[i*j] = 0;	//��������˵������������� 
			}
		}
	}
	for(i = 2;i<number;i++)
	{
		if(Prime[i])
		{
			printf("%d\n",i);	//��ӡ���� 
		}
	}
}
