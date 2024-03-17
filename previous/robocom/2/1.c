#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    scanf("%s %s",s1,s2);
    //使用函数，获得指针
    char *p = strstr(s1,s2);
    for (int i = 0; i < 20; i++)
    {
        //找到第一个相同的就打印并退出
        if (*p == s1[i])
        {
            printf("%d\n",i);
            break;
        }
        
    }
    
}

