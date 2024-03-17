#include<stdio.h>

void delet(char word[],int n,int j);

int main()
{
    const int n = 10;
    char word1[n],word2[n];    //使用变量定义长度时，不可在定义时同时进行初始化赋值，需要在之后进行赋值
    scanf("%s",&word1);
    scanf("%s",&word2);
    for (int i = 0; word2[i] != 0; i++)
    {
        int chars = word2[i];
        for (int j = 0;word1[j] != 0; j++)
        {
            if (word2[i] == word1[j])   //判断是否有相同字母
            {
                delet(word1,n,j);
                j--;    //看看原先的那个位置是否还存在着与word2相同的字母
            }
            
        }
    }
    printf("%s",word1);
    return 0;
}

void delet(char word[],int n,int j)
{
    for (; j < n-1; j++)
    {
        word[j] = word[j+1];    //将后面的字母提前一个单位
    }
    
}