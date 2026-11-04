#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *nextNode;
    
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}