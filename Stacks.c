#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int stack[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

void push(Stack *s, int item) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    s->stack[++s->top] = item;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return s->stack[s->top--];
}

int main() {
    Stack myStack;
    initialize(&myStack);

    push(&myStack, 1);
    push(&myStack, 2);

    printf("Popped: %d\n", pop(&myStack)); // Popped: 2

    return 0;
}
