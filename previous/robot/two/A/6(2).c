#include<stdio.h>

int get_number(char *word,int line) //所以这里导入的值是指针。
{
    int number = 0;
    for (int i = 0; i < line; i++)
    {
        if (word[i] == 0)   //当到结尾时结束
        {
            break;
        }
        number++;   //每次加一
    }
    return number;
}


int main()
{
    //初始化
    const int line = 1000;
    char word[line];    //数组是特殊的指针
    scanf("%s",word);   //输入字符，word是地址，不用&
    int number = get_number(word,line); //调用函数，这个word是指针啊，数组是特殊的指针
    printf("一共有%d个字符。",number);
    return 0;
}