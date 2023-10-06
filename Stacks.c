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

int peek() {
    if (!isempty()) {
        return st.s[st.top];
    } else {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    }
}

int isempty() {
    if (st.top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isfull() {
    if (st.top == size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    /*
    Push: Adds an element(n) to the top of the stack
    push(n);

    Pop: Removes and returns the top element of the stack
    pop();

    Peek: Allows you to view the top element without removing it
    peek();
    printf("%d", peek());
    */
    return 0;
}
