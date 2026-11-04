#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *second = NULL, *third = NULL;
    
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head->data = 10;
    second->data = 20;
    third->data = 30;
    
    head->next = second;
    second->next = third;
    third->next = head;
    
    printf("Three nodes created\n");
    return 0;
}
