#include "anchorLinkedList.h"

node* initAnchorLinkedList()
{
    return newNode(0);
}

void insert(node *head, int data)
{
    node* p = newNode(data);
    head->next = p;
    head->data++;
}

void insertAfter(node* head, node *p, int data)
{
    node* p1 = newNode(data);
    p1->next = p->next;
    p->next = p1;
    head->data++;
}

void delDataAnchorLinkedList(node* head, int data)
{
    node* p = head;
    while(p->next != NULL && p->next->data != data) p = p->next;
    if (p->next == NULL) return;

    node* tmp = p->next;
    p->next = tmp->next;
    tmp->next = NULL;
}

int findMaxInAnchorLinkedList(node* head)
{
    int king = head->next->data;
    node* t = head->next;
    while (t->next != NULL)
    {
        if (t->next->data > king)
        {
            king = t->next->data;
        }
        t = t->next;
    }
        return king;
    
}

node* get(node *head, int i)
{
    node *t = head;
    if (!(i < 0 || i > head->data))
    {
        for (int j = 0; j < i; j++)
            t = t->next;    
        return t;
    }else
    {
        return head; 
    }
    
}

