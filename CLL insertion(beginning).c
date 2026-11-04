#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insertBeg(struct node *head, int x) {
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
    
    newNode->next = head;
    temp->next = newNode;
    return newNode;
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

    // Testing insertion at beginning
    head = insertBeg(head, 5);

    printf("After Insertion: ");
    traverse(head);

    return 0;
}