#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

// Define the stack as a struct
struct Stack {
    int data[MAX_SIZE];
    int top;
};

// Initialize a stack
void initStack(struct Stack *stack) {
    stack->top = -1;
}


void push(struct Stack *stack, int element) {
    if (stack->top < MAX_SIZE - 1) {
        stack->data[++stack->top] = element;
        printf("Pushed '%d' onto the stack.\n", element);
    } else {
        printf("Stack overflow. Cannot push '%d'.\n", element);
    }
}

int pop(struct Stack *stack) {
    if (stack->top >= 0) {
        int element = stack->data[stack->top--];
        printf("Popped '%d' from the stack.\n", element);
        return element;
    } else {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return a default value to indicate failure
    }
}

int main() {
    struct Stack stack;
    initStack(&stack); // Pass a pointer to the stack for initialization

    push(&stack, 5); // Push an integer onto the stack
    push(&stack, 7); // Push another integer onto the stack
    pop(&stack);     // Pop an element from the stack

    return 0;
}
