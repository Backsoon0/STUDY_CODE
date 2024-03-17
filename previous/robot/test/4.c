#include<stdio.h>
#include<string.h>

int main()
{
    char word[100];
    int i,j;
    scanf("%s",word);
    int n = strlen(word);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(word[j]>word[j+1])
            {
                char temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
        }
    }
    printf("%s",word);
}