#include<stdio.h>

struct Student{     //����һ��ģ��
    long number;
    char name[20];
    int socre;
};

int main()
{
    int n,i;
    scanf("%d",&n);
    struct Student stu[n];  //���ｨ��һ�����ģ�����͵�����
    //����ѧ������
    for( i = 0;i<n;i++)
    {
        scanf("%d",&stu[i].number);
        scanf("%s",stu[i].name);
        scanf("%d",&stu[i].socre);
    }
    //���ѧ������
    for( i = 0;i<n;i++)
    {
        printf("%d %s %d\n",stu[i].number,stu[i].name,stu[i].socre);
    }
    return 0;
}