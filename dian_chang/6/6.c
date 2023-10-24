#include<stdio.h>

void sort(int number[],int n);

int main()
{
    int n;
    scanf("%d",&n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }
    sort(number,n);
    for ( int i = 0; i < n; i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}

void sort(int number[],int n)
{
    int j = n;
    while (j>1)
    {
        int max = number[0];
        int maxid = 0;  //这里一定要将maxid初始化,否则会不行，因为如果不这么做的话，maxid可能和max不匹配 
        for (int i = 0; i < j; i++)
        {
            if (number[i]>max)
            {
                max = number[i];
                maxid = i;
            }
            
        }
        int x = number[j-1];
        number[j-1] = number[maxid];
        number[maxid] = x;
        j--;
    }
    
}
