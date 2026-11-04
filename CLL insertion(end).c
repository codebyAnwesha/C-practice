#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insertEnd(struct node *head, int x) {
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }
    
    temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->next = head;
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

    // Testing insertion at end
    head = insertEnd(head, 40);

    printf("After Insertion at End: ");
    traverse(head);

    return 0;
}