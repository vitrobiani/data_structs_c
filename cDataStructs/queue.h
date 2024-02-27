#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#ifndef QUEUE
#define QUEUE

typedef struct queue
{
    node* front;
    node* rear;
}queue;

queue* initQueue();

int isQueueEmpty(queue* q);

void enqueue(queue* queue, int data);

int dequeue(queue* q);

#endif
