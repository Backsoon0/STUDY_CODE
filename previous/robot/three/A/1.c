#include<stdio.h>

void change(int* arr, int size);

int main()
{
    int number;
    scanf("%d",&number);
    int arr[number];
    //遍历输入
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&arr[i]);
    }
    change(arr,number);
    //打印出来
    for (int i = 0; i < number; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void change(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        //如果是负数，则将负数转化为正数
        if (arr[i] < 0)
        {
            arr[i] *= -1;
        }
        
    }
    
}