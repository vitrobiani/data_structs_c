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

queue* initQueue()
{
    queue* q = malloc(sizeof(queue));
    q->front = NULL;
    q->rear = NULL;
    return q;
}

int isQueueEmpty(queue* q) {
    return q->front == NULL;
}

void enqueue(queue* queue, int data)
{
    node* p = newNode(data);
    
    if (!isQueueEmpty(q))
    {
        q->rear->next = p;
        q->rear = p;
    }else
    {
        q->front = p;
        q->rear = p;
    }
}

int dequeue(queue* q)
{
    if (isQueueEmpty(q)) return -1;
    
    node* tmp = q->front;
    q->front = q->front->next
    int data = tmp->data;
    free(tmp);
    return data;
}

#endif