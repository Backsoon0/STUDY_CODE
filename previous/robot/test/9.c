#include<stdio.h>

int main()
{
    int n,i,j,find_count;
    int origin_sum = 0,max_sum = 0;
    scanf("%d",&n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&find_count);
    int Li[find_count],Ri[find_count];
    for (i = 0; i < find_count; i++)
    {
        scanf("%d %d",&Li[i],&Ri[i]);
    }
    //先算出原始的总和
    for (j = 0; j < find_count; j++)
    {
        for (i = Li[j]-1; i <= Ri[j]-1; i++)
        {
            origin_sum += num[i];
        }
    }
    //printf("%d\n",origin_sum);    //调试
    int count=1;
    //排列组合有n的阶乘-1
    for(i = n; i > 0; i--){count *= i;}
    //后面用组合一个一个试
    int k;
    while (count)
    {
        int sum=0;
        //这个是猜的，不知道是不是这样搞组合
        for (i = k%2; i < 4; i++)
        {
            int temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
        }
        //这个用来算总和
        for (j = 0; j < find_count; j++)
        {
            for (i = Li[j]-1; i <= Ri[j]-1; i++)
            {
                sum += num[i];
            }
        }
        //比较大小
        if (max_sum < sum)
        {
            max_sum = sum;
        }
        
        k++;
        count--;
    }
    //printf("%d\n",max_sum);   //调试
    int sub = max_sum - origin_sum;
    printf("%d",sub);
}