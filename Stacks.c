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
