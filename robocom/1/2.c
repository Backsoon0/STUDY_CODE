#include<stdio.h>

void delet(char sentense[],int n);

int main()
{
    char sentense[100];
    fgets(sentense,100,stdin);
    //这个循环能够不漏掉任何一个
    for (int i = 0;sentense[i] != 0; i++)
    {
        for (int j = i; sentense[j] != '\"' && sentense[j] != 0; j++)
        {
            //判断是否有空格
            if (sentense[j] == ' ')
            {
                delet(sentense,j);
            }
            if (sentense[j+1]=='\"')
            {
                i = j+2;    //使i等于“的下一个字符
                //在到下一个“前一直循环。
                while (sentense[i] != '\"')
                {
                    i++;
                    if (sentense[i] == '\"')
                    {
                        break;
                    }
                    
                }
            }
            //发现（直接跳出循环
            if (sentense[j] == '(')
            {
                i = j;
                break;
            }
            
        }
        if (sentense[i] == '(')
        {
            i++;
            //一直循环到）为止
            do
            {
                i++;
                //检测到“进行循环
                if (sentense[i]=='\"')
                {
                    i++;
                    for (;sentense[i] != '\"'; i++)
                    {
                        if (sentense[i] == ' ')
                        {
                            delet(sentense,i);
                        }
                    }

                }
                
            }while ( sentense[i] != ')');   //直到）退出
            
        }
        

    }
    
    fputs(sentense,stdout);
}

//删除空格的函数
void delet(char sentense[],int n)
{
    int i = n+1;
    //循环看看是不是还有空格
    while (sentense[i] == ' ')
    {
        //通过循环将后面的字符提前
        for (int j = i; j < 99; j++)
        {
            sentense[j] = sentense[j+1];
        }
             
    }
    
}