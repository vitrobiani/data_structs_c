#include "queue.h"

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

void enqueue(queue* q , int data)
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
    q->front = q->front->next;
    int data = tmp->data;
    free(tmp);
    return data;
}

