#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *insertMiddle(struct node *head, int x, int pos) {
    struct node *newNode, *temp;
    int i;
    
    if (pos == 1) {
        return insertBeg(head, x);
    }
    
    if (head == NULL || pos < 1) {
        return head;
    }
    
    temp = head;
    for (i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == head) {
            return head;
        }
    }
    
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
}