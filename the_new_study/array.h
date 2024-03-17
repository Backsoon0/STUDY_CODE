#ifndef __ARRAY_H_
#define __ARRAY_H_

typedef struct 
{
    int size;
    int *array;
} Array;

Array array_creat(int size);
void array_free(Array *a);
int array_get(Array *a,int position);
void array_set(Array *a,int position, int value);
void array_inflect(Array *a, int more_size);

#endif