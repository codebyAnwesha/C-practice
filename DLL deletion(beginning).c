#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *deleteBeg(struct node *head) {
    struct node *temp;
    if (head == NULL)
        return NULL;
        
    temp = head;
    head = head->next;
    
    if (head != NULL)
        head->prev = NULL;
        
    free(temp);
    return head;
}