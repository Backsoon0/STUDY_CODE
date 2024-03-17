#include <stdio.h>

typedef void (*fun)(void);

void one(void)
{
    printf("one\n");
}

void two(void)
{
    printf("two\n");
}

void three(void)
{
    printf("three\n");
}

void print(int a)
{
    fun arr[] = {one,two,three};
    fun out = arr[a];
    out();
}

int main()
{
    print(0);
    print(1);
    print(2);
    return 0;
}