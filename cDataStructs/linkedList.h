#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#ifndef LINKEDLIST
#define LINKEDLIST

node* initlinkedList();

void freeList(node* head);

void printList(node* head);

void nodeAddLinkedList(node** headRef, int data);

void nodeInsertLinkedList(node** headRef, int data);

int findMaxInLinkedList(node* head);

// checks if in list
int isInList(node *head, int i);

node* getDataLinkedList(node* head, int data);

// count the amount if data recursively
int countAmountInLinkedList(node* head, int data);

void delFirstLinkedList(node** headRef);

// delete the first instance of data
void delDataLinkedList(node** headRef, int data);

// delete the last instance of data
void delLastDataLinkedList(node** headRef, int data);

void sortAbsValsList(node** hRef);

#endif
