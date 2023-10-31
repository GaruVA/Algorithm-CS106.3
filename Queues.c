#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int queue[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initialize(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

void enqueue(Queue *q, int item) {
    if (q->rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->queue[++q->rear] = item;
}
