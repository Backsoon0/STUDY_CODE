#include<stdio.h>

int main()
{
	int eggplant,pumpkin,carrot;	//������ֵ��ʾ���� 
	//ѭ�����Ҹպ�100������ 
	for(eggplant = 1;eggplant*5 < 100;eggplant++)
	{
		for(pumpkin = 1;pumpkin*6 < 100;pumpkin++)
		{
			for(carrot = 1;carrot*8 <100;carrot++)
			{
				if(eggplant*5 + pumpkin*6 + carrot*8 == 100)
				{
					printf("����%d��,�Ϲ�%d��,���ܲ�%d��\n",eggplant,pumpkin,carrot);
				}
			}
		} 
	}
} 
