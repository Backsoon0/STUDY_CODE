#include<stdio.h>

struct Student{     //建立一个模板
    long number;
    char name[20];
    int socre;
};

int main()
{
    int n,i;
    scanf("%d",&n);
    struct Student stu[n];  //这里建立一个这个模板类型的数组
    //输入学生数据
    for( i = 0;i<n;i++)
    {
        scanf("%d",&stu[i].number);
        scanf("%s",stu[i].name);
        scanf("%d",&stu[i].socre);
    }
    //输出学生数据
    for( i = 0;i<n;i++)
    {
        printf("%d %s %d\n",stu[i].number,stu[i].name,stu[i].socre);
    }
    return 0;
}