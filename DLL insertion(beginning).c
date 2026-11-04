#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *insertBeg(struct node *head, int x) {
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = head;
    
    if (head != NULL) {
        head->prev = newNode;
    }
    return newNode;
}