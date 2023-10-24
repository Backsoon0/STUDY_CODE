#include<stdio.h>

void sort1(int number[],int n);
void sort2(int number[],int n);

int main()
{
    int mode,n;
    scanf("%d %d",&mode,&n);  //输入排序方式,1代表正序,0代表逆序。输入数字个数。
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }
    if (mode == 1)  //正序
    {
        sort1(number,n);
    }
    else if (mode == 0)    //倒叙
    {
        sort2(number,n);
    }
    else
    {
        printf("输入排序方式,1代表正序,0代表逆序。");
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}

void sort1(int number[],int n)
{
    //我的理解是最大的那个慢慢的到最后一位。然后忽略最后一位在循环。
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)    //这里减一是确保j+1有意义
        {
            if(number[j]>number[j+1])
            {
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    
}

void sort2(int number[],int n)
{
    //我的理解是最大的那个慢慢的到最后一位。然后忽略最后一位在循环。
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)    //这里减一是确保j+1有意义
        {
            if(number[j]<number[j+1])
            {
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
}