#ifndef SORTS
#define SORTS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#include "linkedList.h"
#include "tailLinkedList.h"
#include "anchorLinkedList.h"
#include "trees.h"
#define len(arr) sizeof(arr)/sizeof(arr[0])
#define b 10

int findDigs(int i);

tailLinkedList* radixSort(tailLinkedList* list);

void arrSwap(int arr[], int i, int j);

int partition(int arr[], int leng);

void quickSort(int arr[], int len);

#endif
