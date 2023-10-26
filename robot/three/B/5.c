#include<stdio.h>
#include<math.h>

//创建一个Point类型？
typedef struct point
{
    int x;
    int y;
    double distance;
} Point;

void MoveTo(Point* pt, int x, int y);
double Distance(Point* pt);

int main()
{
    Point the_point = {0,0};
    MoveTo(&the_point,1,1);
    printf("%lf",Distance(&the_point));
}

//移动并计算距离
void MoveTo(Point* pt, int x, int y)
{
    pt->distance = sqrt(pow((pt->x - x),2) + pow((pt->y - y),2));
    pt->x = x;
    pt->y = y;
}

//我不会弄，直接返回距离
double Distance(Point* pt)
{
    return pt->distance;
}