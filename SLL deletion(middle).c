#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *deleteMiddle(struct node *head, int pos) {
    struct node *temp, *del;
    int i;
    
    if (head == NULL || pos < 1) {
        return head;
    }
    
    if (pos == 1) {
        return deleteBeg(head);
    }
    
    temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        return head;
    }
    
    del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}