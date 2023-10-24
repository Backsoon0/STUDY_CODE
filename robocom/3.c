#include<stdio.h>
#include<string.h>

int isPrime(int number);

int main()
{
    char word[100];
    char input[100];
    scanf("%s",input);
    strcpy(word,input); //保证输入和输出一样，用副本处理
    int max=0,min=0;
    //不分大小写，所以要全部转化为大写。
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] > 'Z')
        {
            word[i] -= 32;
        }
        
    }
    //遍历所以字符
    for (char i = 'A'; i <= 'Z'; i++)
    {
        int the_word = 0;
        //发现这个字符的数量
        for (int j = 0; j < strlen(word); j++)
        {
            //如果有，就加一
            if (word[j] == i)
            {
                the_word++;
            }
            
        }
        //如果比他还大就加一
        if (the_word > max)
        {
            max = the_word;
        }
        //这里要注意the_word可能会等于0
        if (min == 0 || (the_word < min && the_word != 0))
        {
            min = the_word;
        }
        
    }
    if (isPrime(max - min))
    {
        printf("%s %d",input,max - min);
    }
    else
    {
        printf("No Answer");
    }
    
}

int isPrime(int number)
{
    int is_Prime = 1;
    //偶数当然不是素数啦,除了2
    if (number % 2 == 0 && number != 2)
    {
        is_Prime = 0;
    }
    //奇数也要分类讨论啦
    else
    {
        for (int i = 2; i < number; i++)    //网上说这里可以i<number的平方根，但我不知道为什么
        {
            if (number % i == 0)    //如果能被其他的数整除，则不是素数
            {
                is_Prime = 0;
                break;
            }
            
        }
        
    }
    return is_Prime;
}