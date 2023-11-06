#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int front, int mid, int rear) {
}

void mergeSort(int array[], int front, int rear) {
    if(front < rear) {
        int mid = (front + rear) / 2;
        mergeSort(array, front, mid);
        mergerSort(array, mid+1, rear);
        merge(array, front, mid, rear);
    }
}

int main() {
    int array[] = {4, 6, 2, 7};
    int size = sizeof(array)/sizeof(array[0]);
    printf("%d", size);
    mergeSort(array, 0, size-1);
}
