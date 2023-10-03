#include <stdio.h>

void insert(int array[], int size, int rightIndex, int value) {
    int i;
    for(i = rightIndex; array[i] > value; i--) {
        array[i+1] = array[i];
    }
    array[i+1] = value;
}


int main() {
    int array[] = {3, 5, 7, 11, 13, 2, 9, 6};
    int size = 8;
    insert(array, size, 4, 2);
    insert(array, size, 5, 9);
    insert(array, size, 6, 6);
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
