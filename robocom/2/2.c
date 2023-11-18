#include<stdio.h>

struct people
{
    int number;
    int live;
};

int live(struct people peo[],int n);

int main()
{
    int n;
    printf("请输入这一圈人的数量:");
    scanf("%d",&n);
    struct people peo[n];
    //将每个人的number从1到n，并将live初始化为1(表示还活着)。
    for (int i = 0; i < n; i++)
    {
        peo[i].number = i+1;
        peo[i].live = 1;
    }
    printf("现在剩下的人是:%d号",live(peo,n));
}

int live(struct people peo[],int n)
{
    int count = 0;
    int people_live = n;
    //只剩最后一人的时候停止循环
    while(people_live > 1)
    {
        for (int i = 0; i < n; i++)
        {
            //没有死亡的人计数
            if ((peo+i)->live == 1)
            {
                count++;
            }
            //当点到4的倍数时，那个人的live为0，且总生还数减一
            if (count%4 == 0)
            {
                (peo+i)->live = 0;
                people_live--;
            }
            
        }
    }
    //遍历，找到那个最后的生还者并返回那个人的number
    for (int i = 0; i < n; i++)
    {
        if ((peo+i)->live)
        {
            return (peo+i)->number;
        }
        
    }
    
}