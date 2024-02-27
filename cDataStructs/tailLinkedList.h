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

tailLinkedList* initTailLinkedList();

void addTailLinkedList(tailLinkedList* linkedList, int data);

#endif
