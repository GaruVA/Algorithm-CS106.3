#include <stdio.h>

void insert(int array[], int rightIndex, int value) {
    int i;
    for(i = rightIndex; i >= 0 && array[i] > value; i--) {
        array[i+1] = array[i];
    }
    array[i+1] = value;
}

void insertionSort(int array[], int size) {
    for(int i = 0; i < size; i++) {
        insert(array, i - 1, array[i]);
    }
}


int main() {
    int array[] = {3, 5, 7, 11, 13, 2, 9, 6};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    insertionSort(array, size);
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
