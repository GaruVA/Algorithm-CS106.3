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
