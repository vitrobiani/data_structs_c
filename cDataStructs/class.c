#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include "node.h"
#include "linkedList.h"
#include "tailLinkedList.h"
#include "anchorLinkedList.h"
#include "trees.h"
#include "Sorts.h"
#include "heap.h"
#define len(arr) sizeof(arr)/sizeof(arr[0])

int main()
{
    tnode *root = initBinarySearchTree(7);
    addToBinaryTree(root, 5);
    addToBinaryTree(root, 3);
    addToBinaryTree(root, 6);
    addToBinaryTree(root, 9);
    addToBinaryTree(root, 8);
    addToBinaryTree(root, 10);
    printInOrder(root);
    
    return 0;
}

