#include"array.h"
#include<stdio.h>
#include<stdlib.h>

const int blocksize = 20;

// typedef struct 
// {
//     int size;
//     int *array;
// } Array;

Array array_creat(int size)
{
    Array a;
    a.size = size;
    a.array = (int*)malloc(sizeof(int)*a.size);
    return a;
}

void array_free(Array *a)
{
    free(a->array);
    a->size = 0;
    a->array = NULL;
}

int array_get(Array *a,int position)
{
    return a->array[position];
}

void array_set(Array *a,int position, int value)
{
    if(value >= a->size)
    {
        array_inflect(a,(value/blocksize + 1) * blocksize - a->size);
    }
    a->array[position] = value;
}

void array_inflect(Array *a, int more_size)
{
    int *p = malloc(sizeof(int) * (a->size + more_size));
    a->size = a->size + more_size;
    for (int i = 0; i < a->size; i++)
    {
        p[i] = a->array[i];
    }
    //memcpy((void*) p, (void*) a->array, a->size*sizeof(int));
    free(a->array);
    a->array = p;
}

int main()
{
    Array a = array_creat(100);
    array_set(&a,10,1234);
    printf("%d",array_get(&a,10));
    array_free(&a);
    return 0; 
}