#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int queue[MAX_SIZE];
    int front;
    int rear;
} Queue;
