#include<stdio.h>

int judge(char p1[],char p2[]);

int main()
{
    int n;
    scanf("%d",&n);
    char player1[10],player2[10];
    int p1win=0,p2win=0;
    for(int i = 0;i < n;i++)
    {
        scanf("%s %s",player1,player2);
        int judgment = judge(player1,player2);
        //哪个人赢了就加一
        if(judgment == 1)
        {
            p1win++;
        }
        else if(judgment == -1)
        {
            p2win++;
        }
    }
    //根据赢的次数进行判断
    if(p1win > p2win)
    {
        printf("player1");
    }
    else if(p1win < p2win)
    {
        printf("player2");
    }
    else
    {
        printf("tie");
    }
}

//p1赢返回1，p2赢返回-1，平局返回0。
int judge(char p1[],char p2[])
{
    int p1_win = 0;
    //这里我是根据第二个字符判断的，毕竟第一个字符有重复
    if((p1[1]=='t'&& p2[1]=='c') || (p1[1]=='c'&& p2[1]=='l') || (p1[1]=='l'&& p2[1]=='t'))
    {
        p1_win = 1;
    }
    else if((p2[1]=='t'&& p1[1]=='c') || (p2[1]=='c'&& p1[1]=='l') || (p2[1]=='l'&& p1[1]=='t'))
    {
        p1_win = -1;
    }
    return p1_win;
}