#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "node.h"
#include "linkedList.h"
#include "tailLinkedList.h"
#include "anchorLinkedList.h"
#include "trees.h"
#ifndef SORTS
#define SORTS
#define len(arr) sizeof(arr)/sizeof(arr[0])
#define b 10

int findDigs(int i)
{
    int count = 0;
    while (i != 0)
    {
        count++;
        i = i/10;
    }
    return count;
    
}

tailLinkedList* radixSort(tailLinkedList* list)
{
    tailLinkedList* arr[b]; // the array we will use
    
    // finding the loop amount (d)
    int maxDig = findDigs(findMaxInLinkedList(list->head)); 
    int d = maxDig;
    while (maxDig > 0)
    {
        // initializing all the items in the array
        for (int i = 0; i < b; i++) arr[i] = initTailLinkedList();

        int p = (int)(pow(b,d-maxDig+1)); // the units (tens, thousnds etc.) 
        node* t = list->head;
        while(t != NULL)
        {
            // calculating where in the array should we put the number
            int temp = t->data % p;
            int sorter = (temp - (temp % (p/b)))/(p/b);

            addTailLinkedList(arr[sorter],t->data);

            t = t->next;
        }

        // connecting all the tails
        int i = 0, k = 0;
        while (arr[i]->head == NULL) i++;
        k = i;
        list->head = arr[k]->head;
        for (; i < b; i++)
        {   
            if (arr[i]->head != NULL && i != k)
            {
                arr[k]->tail->next = arr[i]->head;
                k=i;
            }
        }
        list->tail = arr[k]->tail;
        /*
        uncomment this if you want to see the steps!
        printf("%d) %*s", p/b, maxDig, "");
        printList(list->head);
        */
        maxDig--;
    }
    return list;
}

void arrSwap(int arr[], int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

int partition(int arr[], int leng)
{
    int i = 1;
    int j = leng-1;
    
    while (j > i)
    {
        while (arr[i] < arr[0]) i++;

        while (arr[j] > arr[0]) j--;

        if(j < i) break;
        
        arrSwap(arr, i, j);
    }
    return j;
}

void quickSort(int arr[], int len)
{
    if (len <= 2){
        if (arr[0] > arr[1]) arrSwap(arr, 0, 1);
        return;
    }
    
    int x = partition(arr, len);
    arrSwap(arr,0, x);
    int* arr1 = &arr[0];
    int* arr2 = &arr[x+1];
    quickSort(arr1, x+1);
    quickSort(arr2, len-x-1);
}

#endif