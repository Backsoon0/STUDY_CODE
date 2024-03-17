#include<stdio.h>

int isPrime(int number)		//定义 
{
	int i;
	int ret = 1;
	if(number%2 == 0)
	{
		ret = 0;
	}
	else
	{
		for(i = 3;i<number;i+=2)	//网上还有人说只需要i<number的平方根就行了，但我不知道为什么。 
		{
			if(number%i == 0)
			{
				ret = 0;
				break;			// 还有一个是continue，continue的意思是跳过这个循环并进行下一个循环，break是停止这个循环。 
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
