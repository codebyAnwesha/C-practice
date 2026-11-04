#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *deleteBeg(struct node *head) {
    struct node *temp, *last;
    if (head == NULL)
        return NULL;
        
    if (head->next == head) {
        free(head);
        return NULL;
    }
    
    last = head;
    while (last->next != head) {
        last = last->next;
    }
    
    temp = head;
    head = head->next;
    last->next = head;
    free(temp);
    return head;
}

void traverse(struct node *head) {
    if (head == NULL) return;
    struct node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head->data = 10;   head->next = second;
    second->data = 20; second->next = third;
    third->data = 30;  third->next = head;

    printf("Original List: ");
    traverse(head);

    // Testing deletion from beginning
    head = deleteBeg(head);

    printf("After Deletion from Beginning: ");
    traverse(head);

    return 0;
}