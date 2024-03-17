#include<stdio.h>

int volume(int i1,int i2,int h1,int h2);

int main()
{
    int n;
    scanf("%d",&n);
    int height[n];
    //遍历输入
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&height[i]);
    }
    int max_volume = 0;
    //将每一个组合尝试
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int this_volume = volume(i,j,height[i],height[j]);
            if (this_volume > max_volume)
            {
                max_volume = this_volume;
            }
            
        }
        
    }
    printf("%d",max_volume);
    return 0;
    
}

//计算容积
int volume(int i1,int i2,int h1,int h2)
{
    int min_height = h1;
    int the_volume;
    if (h2 < min_height)
    {
        min_height = h2;
    }
    the_volume = (i2-i1) * min_height;  //最小的高乘以底
    return the_volume;
}