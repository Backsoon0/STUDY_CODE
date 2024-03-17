#include<stdio.h>
#include<stdbool.h>

//创建结构模板
struct Triangle
{
	int a;
	int b;
	int c;
};

bool is_right(struct Triangle* tr);

int main()
{
    struct Triangle tr;
    scanf("%d %d %d",&tr.a,&tr.b,&tr.c);
    bool isRight = is_right(&tr);
    //判断
    if (isRight)
    {
        printf("是直角三角形。");
    }
    else
    {
        printf("不是直角三角形。");
    }
    return 0;
}

bool is_right(struct Triangle* tr)
{
    bool is_right_triangle = false;
    //判断是否为直角三角形
    if (tr->a * tr->a + tr->b * tr->b == tr->c * tr->c || 
        tr->a * tr->a + tr->c * tr->c == tr->b * tr->b || 
        tr->c * tr->c + tr->b * tr->b == tr->a * tr->a)
    {
        is_right_triangle = true;
    }
    return is_right_triangle;
}