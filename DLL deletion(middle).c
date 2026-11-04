#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *deleteMiddle(struct node *head, int pos) {
    struct node *temp;
    int i;
    
    if (head == NULL || pos < 1)
        return head;
        
    if (pos == 1)
        return deleteBeg(head);
        
    temp = head;
    for (i = 1; i < pos; i++) {
        temp = temp->next;
        if (temp == NULL)
            return head;
    }
    
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    
    free(temp);
    return head;
}