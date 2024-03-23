#include <stdio.h>
#include "include/lwrb.h"

lwrb_t sbuff;
uint8_t the_buff[10];
uint8_t write[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
uint8_t read[15] = {5,6,7,8};

int main()
{
    lwrb_init(&sbuff,the_buff,10);
    lwrb_write(&sbuff,write,5);
    lwrb_read(&sbuff,read,5);    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",read[i]);
    }
    
    return 0;
}