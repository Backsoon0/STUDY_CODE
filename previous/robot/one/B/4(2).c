#include<stdio.h>

int isPrime(int number)		//���� 
{
	int i;
	int ret = 1;
	if(number%2 == 0)
	{
		ret = 0;
	}
	else
	{
		for(i = 3;i<number;i+=2)	//���ϻ�����˵ֻ��Ҫi<number��ƽ���������ˣ����Ҳ�֪��Ϊʲô�� 
		{
			if(number%i == 0)
			{
				ret = 0;
				break;			// ����һ����continue��continue����˼���������ѭ����������һ��ѭ����break��ֹͣ���ѭ���� 
			}
		}
	}
	return ret;
}

int main()
{
	int number;
	for(number = 2;number<1000;number++)
	{
		if(isPrime(number))
		{
			printf("%d\n",number);
		}
	}
	return 0;
} 
