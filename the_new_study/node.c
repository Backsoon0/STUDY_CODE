#include<stdio.h>
#include<stdlib.h>
#include"node.h"

// int main()
// {
//     List list;
//     list.head = NULL;
//     list.last = NULL;
//     int number;
//     do{
//         scanf("%d",&number);
//         if (number != -1)
//         {
//             add(&list,number);
//         }

//     }while (number != -1);

//     Node *last = list.head;
//     while (last)
//     {
//         printf("%d ",last->number);
//         last = last->next;
//     }
    
    
// }

void add(List *pList,int number)
{
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->number = number;
    p->next = NULL;
    if(pList->last)    //判断这个p是不是第一个，如果是，那就将p赋给head，如果不是，将这个p链接之前的p。(此p非彼p)
    {
        if (pList->last->next)  //这里一定要判断或循环，否则就会赋空指针，然后你就没了。
        {
           pList->last = pList->last->next;
        }
        pList->last->next = p;
    }
    else
    {
        pList->head = p;
        pList->last = p;
    }
}

// void add(List *pList,int number)
// {
//     Node *p;
//     p = (Node *)malloc(sizeof(Node));
//     p->number = number;
//     p->next = NULL;
//     Node *last = pList->head;
//     if(last)    //判断这个p是不是第一个，如果是，那就将p赋给head，如果不是，将这个p链接之前的p。(此p非彼p)
//     {
//         while(last->next)    //这里一定要判断或循环，否则就会赋空指针，然后你就没了。
//         {
//             last = last->next;
//         }
//         last->next = p;
//     }
//     else
//     {
//         pList->head = p;
//     }
// }

void print(List *pList)
{
    Node *p = pList->head;
    while (p)
    {
        printf("%d ",p->number);
        p = p->next;
    }
    printf("\n");
}

void del(List *pList,int number)
{
        Node *q = NULL;
    Node *p = pList->head;
    while (p)
    {
        if (p->number == number)
        {
            if (q)
            {
                q->next = p->next;
            }
            else
            {
                pList->head = p->next;
            }
            free(p);
            break;
        }
        q = p;
        p = p->next;
    }
}

void free_node(List *pList)
{
    Node *p = pList->head;
    Node *q = NULL;
    while (p)
    {
        q=p->next;
        free(p);
        p=q;
    }

}