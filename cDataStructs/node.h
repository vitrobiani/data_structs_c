#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef NODE
#define NODE

typedef struct node
{
    int data;
    struct node* next;
}node;

typedef struct tnode
{
    int data;
    struct tnode* left;
    struct tnode* right;
}tnode;

typedef struct t23node
{
    int data1;
    int data2;
    int isData2Used;
    struct t23node* left;
    struct t23node* middle;
    struct t23node* right;
}t23node;

node newStNode(int data);

node* newNode(int data);

t23node* newt23node(int data1, int isData2Used ,int data2 );

void printNode(node* head);

#endif
