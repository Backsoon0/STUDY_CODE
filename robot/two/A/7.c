#include<stdio.h>

int main()
{
    int count;
    int i,j,n_max;
    scanf("%d",&count);
    j = count;
    int number[count];
    //遍历输入
    for ( i = 0; i < count; i++)
    {
        scanf("%d",&number[i]);
    }
    while (j > 1)
    {
        int max = number[0];
        int n_max = 0;  //这里要用0啊，不要漏
        for ( i = 1; i < j; i++)
        {
            if (number[i]>max)
            {
                max = number[i];
                n_max = i;
            }
        }
        int tem = number[j-1];  //这里要减一呀，不要漏
        number[j-1] = number[n_max];
        number[n_max] = tem;
        j--;
    }
    for ( i = 0; i < count; i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}