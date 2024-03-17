#include<stdio.h>

typedef struct point
{
    int x;
    int y;
} Point;

typedef struct force
{
    int x;
    int y;
    int work;
} Force;

struct r
{
    int x;
    int y;
};

int getWork(Force* F);  //获得功
void moveTo(Point* pt, Force* F , int x, int y);    // 用于移动一个点,且有 力F 的参与
void changeForce(Force* F , int x , int y);         // 用于改变力的大小和方向

int main()
{
    Point p1,p2;
    p1.x=0;p1.y=0; p2.x=0;p2.y=0;//初始化时直接赋值，后面不会出现直接改值的情况
    Force F1,F2;
    F1.work=0;F2.work=0;
    F1.x=0;F1.y=0; F2.x=0;F2.y=0; //初始化时直接赋值，后面不会出现直接改值的情况
    changeForce(&F1,1,2);//将F1改为(1,2)
    changeForce(&F2,3,2); //将F2改为(3,2)

    moveTo(&p1,&F1,3,5);//在F1的作用下（无F2作用），p1移动到（3，5）
    moveTo(&p2,&F2,-4,2); //在F2的作用下（无F1作用），p2移动到（-4，2）

    changeForce(&F1,1,-2); //修改F1为（1，-2）
    moveTo(&p1,&F1,6,-5); //在F1的作用下（无F2作用），p1移动到（6，-5）
    moveTo(&p2,&F2,3,-8); //在F2的作用下（无F1作用），p2移动到（6，-5）

    int W1=getWork(&F1);
    int W2=getWork(&F2);

    printf("F1做的功总共为%d。F2做的功总共为%d",W1,W2);
    return 0;

}

void moveTo(Point* pt, Force* F , int x, int y)
{
    struct r the_r;
    the_r.x = x - pt->x;
    the_r.y = y - pt->y;
    F->work += F->x * the_r.x + F->y * the_r.y;
    pt->x = x;
    pt->y = y;
}

void changeForce(Force* F , int x , int y)
{
    F->x = x;
    F->y = y;
}

int getWork(Force* F)
{
    return F->work;
}