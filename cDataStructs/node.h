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

node newStNode(int data)
{
    node n;
    n.data = data;
    n.next = NULL;
    return n;
}

node* newNode(int data)
{
    node* n = malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
    return n;
}

t23node* newt23node(int data1, int isData2Used ,int data2 )
{
    t23node* t23 = malloc(sizeof(t23node));
    t23->data1 = data1;
    t23->isData2Used = isData2Used;
    if (isData2Used) t23->data2 = data2;

    t23->left = NULL;
    t23->middle = NULL;
    t23->right = NULL;
}

#endif