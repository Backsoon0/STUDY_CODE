#include<stdio.h>
#include<math.h>



int main()
{
    char number = -1;
    int Num=7689;
    unsigned char i;
    for ( i = 4; i > 0; i--)
    {
        printf("%c",(int)(Num/pow(10,i-1))%10+'0');
    }
    
    
}

