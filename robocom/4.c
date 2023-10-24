#include<stdio.h>
#include<string.h>
#include<math.h>

int judge(char word[]);
int sort(long long sum);

int main()
{
    char word[50];
    long long sum = 0;
    //循环输入并判断单词
    for (int i = 0; i < 6; i++)
    {
        scanf("%s",word);
        //先把他们按数位相加
        sum += judge(word) * pow(100,i);
        //这样可以输入小于六个单词的句子
        if (getchar() == '\n')
        {
            break;
        }
        
    }
    //将sum进行排序
    sum = sort(sum);
    printf("%lld",sum);
}

int judge(char word[])
{
    int number = 0;
    char *number_word[21] = {
        "zero","one","two","three","four","five","six",
        "seven","eight","nine","ten","eleven",
        "twelve","thirteen","fourteen","fifteen",
        "sixteen","seventeen","eighteen","nineteen","twenty",
    };
    //判断，如果有相同的字符串就返回相同的数字
    for (int i = 0; i < 21; i++)
    {
        if (strstr(word,number_word[i]))
        {
            number = i;
        }
    }
    return number;
}

int sort(long long sum)
{
    int num[6];
    for (int i = 0; i < 6 ; i++)
    {
        num[i] = sum%100;
        sum /= 100;
    }
    //进行冒泡排序
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6-1-i; j++)
        {
            if (num[j]<num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
            
        }
        
    }
    //将他们的最小组合相加
    for (int i = 0; i < 6; i++)
    {
        sum += num[i] * pow(100,i);
    }
    return sum;
}