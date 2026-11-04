#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insertMiddle(struct node *head, int x, int pos) {
    struct node *newNode, *temp;
    int i;
    
    if (pos == 1)
        return insertBeg(head, x);
        
    if (pos < 1 || head == NULL)
        return head;
        
    temp = head;
    for (i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == NULL)
            return head;
    }
    
    newNode = malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    
    return head;
}