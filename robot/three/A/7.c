#include<stdio.h>

struct TrafficLight
{
	int color; // 0, 表示红色， 1 表示黄 ， 2表示绿
};

void change(struct TrafficLight* light);
void show(struct TrafficLight* light);

int main()
{
    struct TrafficLight traff;
    traff.color = 0;    //初始化为红灯
    change(&traff);
    show(&traff);
}

void change(struct TrafficLight* light)
{
    //红灯变绿灯
    if (light->color == 0)
    {
        light->color = 2;
    }
    //绿灯变黄灯
    else if (light->color == 2)
    {
        light->color = 1;
    }
    //黄灯变红灯
    else if (light->color == 1)
    {
        light->color == 0;
    }
    
}

void show(struct TrafficLight* light)
{
    //红灯
    if (light->color == 0)
    {
        printf("红灯");
    }
    //绿灯
    else if (light->color == 2)
    {
        printf("绿灯");
    }
    //黄灯
    else if (light->color == 1)
    {
        printf("黄灯");
    }
}