#include<stdio.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 2024; i++)
    {
        if (i%400 != 0 && i%100 == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
    
}