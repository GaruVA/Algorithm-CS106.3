#include <stdio.h>

int indexOfMinimum(int array[], int size, int startIndex) {
    int minValue = array[startIndex];
    int minIndex = startIndex;
    for(int i = startIndex; i < size; i++) {
        if(array[i] < minValue) {
            minValue = array[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void swap(int array[], int firstIndex, int secondIndex) {
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}

void selectionSort(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        swap(array, indexOfMinimum(array, size, i), i);
    }
}

int main() {
    int array[] = {18, 9, 66, 44, 6, 22, 14};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    selectionSort(array, size);

    printf("Sorted Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
