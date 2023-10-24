#include<stdio.h>
#include<math.h>

int pow_plus(int number,int count);
int units(int number);

int main()
{
    int l,r;
    int count = 0;
    scanf("%d %d",&l,&r);
    //遍历这个区间，找到这个区间中的n阶数
    for (int i_number = l; i_number <= r; i_number++)
    {
        //算出他是几位数
        int j = units(i_number);
        //求出次法和
        int sum = pow_plus(i_number,j);
        //如果等于就输出
        if (sum == i_number)
        {
            printf("%d ",i_number);
            count++;
        }
    }
    //如果没有就输出-1
    if (count == 0)
    {
        printf("-1");
    }
    return 0;
}

//这里弄出平方和
int pow_plus(int number,int count)
{
    int sum = 0;
    while (number != 0)
    {
        int single = number % 10;
        number /= 10;
        sum += pow((double)single,(double)count);
    }
    return sum;
}

//弄出是多少位数
int units(int number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}