#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int number[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    //我的理解是最大的那个慢慢的到最后一位。然后忽略最后一位在循环。
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(number[j]>number[j+1])
            {
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}
