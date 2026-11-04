#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insertEnd(struct node *head, int x) {
    struct node *newNode, *temp;
    newNode = malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    
    if (head == NULL) {
        return newNode;
    }
    
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    return head;
}