#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int search(struct node *head, int key) {
    struct node *temp;
    int pos = 1;
    
    if (head == NULL) {
        return -1;
    }
    
    temp = head;
    do {
        if (temp->data == key) {
            return pos;
        }
        temp = temp->next;
        pos++;
    } while (temp != head);
    
    return -1;
}