#include<stdio.h>
#include"node.h"

int main()
{
    List list;
    list.head = NULL;
    list.last = NULL;
    int number;
    do{
        scanf("%d",&number);
        if (number != -1)
        {
            add(&list,number);
        }

    }while (number != -1);

    print(&list);
    scanf("%d",&number);
    del(&list,number);
    print(&list);
    free_node(&list);
    return 0;
    
}
