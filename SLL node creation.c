#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *second, *third;
    
    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    
    head->data = 10;
    second->data = 20;
    third->data = 30;
    
    head->next = second;
    second->next = third;
    third->next = NULL;
    
    printf("three nodes created");
    return 0;
}