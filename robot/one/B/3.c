#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//题目没说平局怎么搞啊 
int main()
{
	srand(time(0));
	int number = rand()%10;	//生成随机数 
	int input;
	//骰子是1-6对吧 
	if(number > 6)
	{
		number -= 3;
	}
	scanf("%d",&input);
	printf("%d",number);
	//判断 
	if(number>input)
	{
		printf("你输了");
	}
	else
	{
		printf("你赢了"); 
	}
 } 
