#include<stdio.h>

enum number {
    A = 10,B,C,D,E,F,G
};

int main()
{
    int number;
    scanf("%d",&number);
    switch (number)
    {
        case A:
            printf("A");
            break;
        case B:
            printf("B");
            break;
        case C:
            printf("C");
            break;
        case D:
            printf("D");
            break;
        case E:
            printf("E");
            break;
        case F:
            printf("F");
            break;
        case G:
            printf("G");
            break;
        default:
            break;
    }
    
    
    return 0;
}