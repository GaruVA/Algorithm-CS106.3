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

int dequeue(Queue *q) {
    if (q->front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    int item = q->queue[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
    return item;
}

int main() {
    Queue myQueue;
    initialize(&myQueue);

    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);

    printf("Dequeued: %d\n", dequeue(&myQueue)); // Dequeued: 1

    return 0;
}

