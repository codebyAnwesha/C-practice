#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *insertMiddle(struct node *head, int x, int pos) {
    struct node *newNode, *temp;
    int i;
    
    if (pos < 1) {
        return head;
    }
    
    if (pos == 1) {
        return insertBeg(head, x);
    }
    
    temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        return head;
    }
    
    newNode = malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
}