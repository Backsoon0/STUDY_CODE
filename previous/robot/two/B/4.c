#include<stdio.h>

//想到了那个构造素数表的那个东西
int main()
{
    int n,k;
    int exit_people = 0;
    int count = 0;
    scanf("n=%d k=%d",&n,&k);
    int people[n+1];
    for (int i = 0; i < n+1; i++)   //所有人都在船上
    {
        people[i] = 1;
    }
    int i = 0;
    while (exit_people != k)
    {
        count++;
        if (count > n)  //如果count超过编号，则变为1
        {
            count = 1;
        }
        
        if (people[count])  //数只在船上的人
        {
            i++;
        }
        else
        {
            continue;   //如果这个序号的人不在了，就退回去重新来过，防止这个9的倍数被重复利用。
        }
        
        if (i%9 == 0)   //如果数到9的倍数，那个人就下船
        {
            people[count]=0;
            exit_people++;
            printf("%d ",count);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (!people[i])
    //     {
    //         printf("%d ",i);
    //     }
        
    // }
    

}