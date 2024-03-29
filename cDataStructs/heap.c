#include "heap.h"

heap* initHeap()
{
    heap* h = malloc(sizeof(heap));

    h->heapArr = malloc(MAX * sizeof(int));
    h->size = 0;
    return h;
}

void heapSwap(heap** heapRef, int i, int j)
{
    int tmp = (*heapRef)->heapArr[i];
    (*heapRef)->heapArr[i] = (*heapRef)->heapArr[j];
    (*heapRef)->heapArr[j] = tmp;
}

void addToHeap(heap** heapRef, int data)
{
    int loc = (*heapRef)->size;
    (*heapRef)->size++;
    (*heapRef)->heapArr[loc] = data;

    while (data > (*heapRef)->heapArr[loc/2])
    {
        heapSwap(heapRef, loc, loc/2);
    }
    
}

int getHeapMax(heap* h)
{
    return h->heapArr[0];
}

int getHeapSize(heap* h)
{
    return h->size;
}
