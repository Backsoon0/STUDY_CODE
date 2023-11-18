#include<stdio.h>
#include<string.h>

int main()
{
    char *the_word[10] = {"A0","A1","A2","A3","A4","A5","A6","A7","A8","A9"};
    int high = 1189;
    int weight = 841;
    char word[3];
    scanf("%s",word);
    int i=0;
    //算出要对折多少次
    while (strcmp(word,the_word[i]))
    {
        i++;
    }
    //将high变为之前weight的值，weight为之前的high的值的一半
    while (i)
    {
        int temp = high/2;
        high = weight;
        weight = temp;
        i--;
    }
    printf("%d\n%d",high,weight);
}