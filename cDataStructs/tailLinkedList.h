#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#ifndef TAILLINKEDLIST
#define TAILLINKEDLIST

typedef struct tailLinkedList
{
    node* head;
    node* tail;
}tailLinkedList;

tailLinkedList* initTailLinkedList()
{
    tailLinkedList* linkedList = malloc(sizeof(tailLinkedList));
    linkedList->head = NULL;
    linkedList->tail = NULL;
    return linkedList;
}

void addTailLinkedList(tailLinkedList* linkedList, int data)
{
    node* p = malloc(sizeof(node));
    p->data = data;
    p->next = NULL;
    if (linkedList->head != NULL)
    {
        linkedList->tail->next = p;
        linkedList->tail = p;
    }else
    {
        linkedList->head = p;
        linkedList->tail = p;
    }
}
#endif