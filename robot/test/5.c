#include<stdio.h>

int main()
{
    int card_num[10] = {2023,2023,2023,2023,2023,2023,2023,2023,2023,2023};
    int i;
    for ( i = 1;card_num[0]!=0 && card_num[1]!=0 && 
                card_num[2]!=0 && card_num[3]!=0 && 
                card_num[4]!=0 && card_num[5]!=0 &&
                card_num[6]!=0 && card_num[7]!=0 &&
                card_num[8]!=0 && card_num[9]!=0; i++)
    {
        int n = i;
        while (n!=0)
        {
            card_num[n%10]--;
            n/=10;
        }
    }
    printf("%d",i);
}