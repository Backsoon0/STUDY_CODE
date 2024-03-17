#include<stdio.h>
#include<string.h>

int Search(char *list,char *mod);

int main()
{
    char str1[20];
    char str2[20];
    scanf("%s %s",str1,str2);
    //将str1前后拼接一下
    strcat(str1,str1);
    //printf("%s\n",str1);
    //用strstr判断str2是不是str1的子串
    if (strstr(str1,str2))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
}

//list是要查找的字符，看mod是不是list的字串
//但是这个函数有问题，想用自己的函数没搞定
int Search(char *list,char *mod)
{
    int find_str = 0;
    int n1 = strlen(list);
    int n2 = strlen(mod);
    int i,j;
    for (i = 0; i < n1; i++)
    {
        //找出开头相同的字母
        if (list[i] == mod[0])
        {
            char word[n2];
            //循环看看是不是相同的
            for (j = 0; j < n2; j++)
            {
                if (list[i+j] != mod[j])
                {
                    find_str = 0;
                    break;
                }
                find_str++;
                
            }
            
        }
        
    }
    int find = 0;
    if (find_str == n2)
    {
        find = 1;
    }
    return find;
}