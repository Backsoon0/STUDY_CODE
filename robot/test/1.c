#include<stdio.h>

int main()
{
    int n,k;
    int out;
    scanf("n:%d k:%d",&n,&k);
    //检查它能不能够除的尽
    if (n%k==0)
    {
        out = n/k;
    }
    else
    {
        out = n/k+1;
    }
    printf("%d",out);
    return 0;
    
}