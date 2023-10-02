#include <stdio.h>
#define size 5

struct stack {
    int s[size];
    int top;
} st;

void push(int item) {
    if (!isfull()) {
        st.top++;
        st.s[st.top] = item;
    } else {
        printf("Stack is full. Cannot push item.\n");
    }
}

int pop() {
    if (!isempty()) {
        int item = st.s[st.top];
        st.top--;
        return item;
    } else {
        printf("Stack is empty. Cannot pop item.\n");
        return -1;
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
