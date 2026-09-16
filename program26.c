#include <stdio.h>

#define MAX 5

// Global variables
int stack[MAX];
int top = -1;

// Function declarations (Prototypes)
void push(int value);
int pop();
int peek();
int isFull();
int isEmpty();
void display();

int main() {
    // Calling functions in main
    push(10);
    push(20);
    push(30);
    
    display();
    
    printf("Popped = %d\n", pop());
    printf("Top element = %d\n", peek());
    
    display();
    
    return 0;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to insert an element into the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed = %d\n", value);
    }
}

// Function to remove an element from the stack
int pop() {
    if (isEmpty()) {
        printf("No element to pop\n");
        return -1;
    } else {
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

// Function to return the topmost element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

// Function to display all elements in the stack
void display() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack Elements\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("\n");
}