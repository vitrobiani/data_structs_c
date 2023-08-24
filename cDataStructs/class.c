#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#include "linkedList.h"
#include "tailLinkedList.h"
#include "anchorLinkedList.h"
#include "trees.h"

a
int main()
{
    node* head = initlinkedList();

    for (int i = 0; i < 10; i++)
    {
        nodeAddLinkedList(&head, rand());
    }
    nodeAddLinkedList(&head, 42);
    nodeAddLinkedList(&head, 43);
    nodeAddLinkedList(&head, 41);
    delLastDataLinkedList(&head, 42);
    printList(head);


    // printf("%d\n", 263%14);

    return 0;
}

