#include<stdio.h>

int main()
{
	int eggplant,pumpkin,carrot;	//变量的值表示数量 
	//循环查找刚好100的数量 
	for(eggplant = 1;eggplant*5 < 100;eggplant++)
	{
		for(pumpkin = 1;pumpkin*6 < 100;pumpkin++)
		{
			for(carrot = 1;carrot*8 <100;carrot++)
			{
				if(eggplant*5 + pumpkin*6 + carrot*8 == 100)
				{
					printf("茄子%d个,南瓜%d个,胡萝卜%d个\n",eggplant,pumpkin,carrot);
				}
			}
		} 
	}
} 
