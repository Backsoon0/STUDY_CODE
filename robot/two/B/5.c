#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //直接把扑克牌列出来,用指针数组列出来
    const char *Poker[53]={
        "h1","h2","h3","h4","h5","h6","h7","h8","h9","h10","hJ","hQ","hK",
        "s1","s2","s3","s4","s5","s6","s7","s8","s9","s10","sJ","sQ","sK",
        "c1","c2","c3","c4","c5","c6","c7","c8","c9","c10","cJ","cQ","cK",
        "d1","d2","d3","d4","d5","d6","d7","d8","d9","d10","dJ","dQ","dK",
    };
    srand(time(0)); //生成种子，把这个放for循环外面能产生不同的随机数
    for (int i = 0; i < 10; i++)
    {
        int ran_number = rand()%53; //生成随机数
        printf("%s\n",Poker[ran_number]);
    }
    return 0;
} 