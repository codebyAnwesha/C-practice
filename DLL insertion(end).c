#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *insertEnd(struct node *head, int x) {
    struct node *newNode, *temp;
    newNode = malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    
    if (head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }
    
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}