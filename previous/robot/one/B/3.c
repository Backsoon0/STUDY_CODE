#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��Ŀû˵ƽ����ô�㰡 
int main()
{
	srand(time(0));
	int number = rand()%10;	//��������� 
	int input;
	//������1-6�԰� 
	if(number > 6)
	{
		number -= 3;
	}
	scanf("%d",&input);
	printf("%d",number);
	//�ж� 
	if(number>input)
	{
		printf("������");
	}
	else
	{
		printf("��Ӯ��"); 
	}
 } 
