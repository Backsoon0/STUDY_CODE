#include <stdio.h>
#include <stdlib.h>

int randon(int a)
{
    srand(a);
    return rand();
}

int callbackFuntion(int (*a)(int),int seed)
{
    int number = a(seed);
    printf("the number is %d",number);
    return number;
}

int main()
{
    int seed;
    scanf("%d",&seed);
    callbackFuntion(randon,seed);
    return 0;
}