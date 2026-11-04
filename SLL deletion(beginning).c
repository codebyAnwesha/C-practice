#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *deleteBeg(struct node *head) {
    struct node *temp;
    if (head == NULL) {
        return NULL;
    }
    
    temp = head;
    head = head->next;
    free(temp);
    return head;
}