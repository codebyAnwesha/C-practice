#include <stdio.h>
#define SIZE 5
void enqueue(int);
void dequeue();
void display();
int item[SIZE];
int front = -1, rear = -1;
int main() {
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("\nFull");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        item[rear] = value;
        printf("\nInserted = %d", value);
    }
}
void dequeue() {
    if (front == -1) {
        printf("\nEmpty");
    } else {
        printf("\nDeleted = %d", item[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}
void display() {
    if (front == -1) {
        printf("\nEmpty");
    } else {
        printf("\nElements = ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", item[i]);
        }
        printf("\n");
    }
}