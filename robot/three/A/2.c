#include<stdio.h>

//建立结构模板
struct Triangle
{
	int a;
	int b;
	int c;
};

int main()
{
    //创建结构类型
    struct Triangle apple = {
        5,3,4
    };
    int sum = apple.a + apple.b + apple.c;  //使用结构中的数据并相加
    printf("%d",sum);
}