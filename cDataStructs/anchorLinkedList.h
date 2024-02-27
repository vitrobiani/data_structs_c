#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#ifndef ANCHORLINKEDLIST
#define ANCHORLINKEDLIST

node* initAnchorLinkedList();

void insert(node *head, int data);

void insertAfter(node* head, node *p, int data);

void delDataAnchorLinkedList(node* head, int data);

int findMaxInAnchorLinkedList(node* head);

node* get(node *head, int i);

#endif
