#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef TREE
#define TREE

tnode* initBinarySearchTree(int data)
{
    tnode *root = malloc(sizeof(tnode));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
}

void addToBinaryTree(tnode *root, int data)
{
    tnode *t = root;
    tnode *p;
    tnode *new = malloc(sizeof(tnode));
    new->data = data;
    new->left = NULL;
    new->right = NULL;

    while (t != NULL)
    {
        p=t;
        if (data <= t->data)
        {
            t = t->left;
        }else{
            t = t->right;
        }
    }
    if (data < p->data)
    {
        p->left = new;
    }else{
        p->right = new;
    }
    
    
}

void printPreOrder(tnode* root)
{
    if (root != NULL)
    {
        printf("%d - ", root->data);
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
    return; 
}

void printInOrder(tnode* root)
{
    if (root != NULL)
    {
        printInOrder(root->left);
        printf("%d  ", root->data);
        printInOrder(root->right);
    }
    return; 
}

void printLeaves(tnode* root)
{
    if (root->left == NULL && root->right == NULL)
    {
        printf("%d  ", root->data);
        return;
    }

    if (root->left != NULL) printLeaves(root->left);

    if (root->right != NULL) printLeaves(root->right);    
    
}

#endif