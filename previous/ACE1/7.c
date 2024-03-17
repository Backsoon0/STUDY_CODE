#include<stdio.h>
#include <string.h>
#include <ctype.h>

//李志超哥哥，治好你的病了哦。

int main()
{
    const int NUMBER = 1000;
    char string[NUMBER];
    //输入一行字符串
    fgets(string,NUMBER,stdin);
    int num = strlen(string);
    //循环，到换行符截止
    int j = num - 2;    //这个还要减去那个换行符
    for (int i = 0;j>i; i++)
    {
        if (isalpha(string[i])) //判断是不是字母
        {
            while (j > i)   //这样就能退出了
            {
                if (isalpha(string[j])) //判断是不是字母
                {
                    //这里替换
                    char tem = string[i];
                    string[i] = string[j];
                    string[j] = tem;
                    j--;    //成功也是要减一的，不要忘了，因为break就直接退出了。
                    break;  //成功就还要退出这个循环
                }
                j--;    //不是字母就看看下一个是不是字母
                
            }
            
        }
        
    }
    printf("%s",string);
    return 0;
}