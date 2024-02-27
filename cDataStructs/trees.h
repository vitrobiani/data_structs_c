#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#ifndef TREE
#define TREE

tnode* initBinarySearchTree(int data);

void addToBinaryTree(tnode *root, int data);

void printPreOrder(tnode* root);

void printInOrder(tnode* root);

void printLeaves(tnode* root);

#endif
