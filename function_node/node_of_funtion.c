#include <stdio.h>
#include <stdlib.h>

int fast(void)
{
    return rand();
}

int main()
{
    int (*a)(void) = fast;
    int i;
    scanf("%d",&i);
    while (i--)
    {
        printf("%d ",a());
    }
    return 0;
}