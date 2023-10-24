#include<stdio.h>

int main()
{
    //初始化
    const int line = 1000;
    int number = 0;
    char word[line];
    scanf("%s",word);   //输入字符
    for (int i = 0; i < line; i++)
    {
        if (word[i] == 0)   //当到结尾时结束
        {
            break;
        }
        number++;   //每次加一
    }
    printf("一共有%d个字符。",number);
    return 0;
}