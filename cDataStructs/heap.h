#include <stdio.h>
#include <stdlib.h>
#ifndef HEAP
#define HEAP
#define MAX 100

typedef struct heap
{
    int size;
    int *heapArr;
}heap;

heap* initHeap();

void heapSwap(heap** heapRef, int i, int j);

void addToHeap(heap** heapRef, int data);

int getHeapMax(heap* h);

int getHeapSize(heap* h);

#endif
