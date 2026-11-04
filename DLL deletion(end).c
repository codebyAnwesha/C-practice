#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *deleteEnd(struct node *head) {
    struct node *temp;
    if (head == NULL)
        return NULL;
        
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    if (temp->prev == NULL) {
        head = NULL;
    } else {
        temp->prev->next = NULL;
    }
    
    free(temp);
    return head;
}