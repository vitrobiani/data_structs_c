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

int arrayEqual(int arr1[], int arr2[])
{
    tailLinkedList* tll1 = initTailLinkedList();
    tailLinkedList* tll2 = initTailLinkedList();

    for (int i = 0; i < 8; i++)
    {
        addTailLinkedList(tll1, arr1[i]);
        addTailLinkedList(tll2, arr2[i]);
    }

    radixSort(tll1);
    radixSort(tll2);

    printList(tll1->head);
    printList(tll2->head);
}

int main()
{
    tnode* root = initBinarySearchTree(12);
    addToBinaryTree(root, 5);
    addToBinaryTree(root, 18);
    addToBinaryTree(root, 3);
    addToBinaryTree(root, 6);
    addToBinaryTree(root, 15);
    addToBinaryTree(root, 19);
    addToBinaryTree(root, 8);
    addToBinaryTree(root, 2);
    addToBinaryTree(root, 4);

    printLeaves(root);
    
    return 0;
}

