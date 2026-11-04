#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}