#include<stdio.h>

struct Triangle
{
	int a;
	int b;
	int c;
};

int main()
{
    struct Triangle stu[2] ={{1,2,3},{4,5,6}};
    struct Triangle *a = &stu[1];
    printf("%d %d %d\n",stu[0].a,stu[0].b,stu[0].c);
    printf("%d %d %d",a->a,a->b,a->c);
}