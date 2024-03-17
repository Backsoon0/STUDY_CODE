#ifndef __NODE_H_
#define __NODE_H_

typedef struct node
{
    int number;
    struct node *next;
} Node;

typedef struct _list
{
    Node *head;
    Node *last;
} List;

void add(List *pList,int number);
void print(List *pList);
void del(List *pList,int number);
void free_node(List *list);

#endif