#include<stdio.h>

double average_value(int score[],int number);

int main()
{
    int number;
    scanf("%d",&number);    //输入个数
    int score[number];
    for (int i = 0; i < number; i++)    //遍历数组并输入
    {
        scanf("%d",&score[i]);
    }
    double average = average_value(score,number);   //调用函数，获取平均值
    printf("%lf",average);
    return 0;
}

double average_value(int score[],int number)
{
    int sum = 0;
    double average;
    for (int i = 0; i < number; i++)    //先求和
    {
        sum += score[i];
    }
    average = 1.0*sum/number;   //和除以总数获得平均值
    return average;
}