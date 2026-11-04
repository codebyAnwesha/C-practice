#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int search(struct node *head, int key) {
    struct node *temp = head;
    int pos = 1;
    
    while (temp != NULL) {
        if (temp->data == key) {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}