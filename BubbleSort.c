#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int size) {
    bool swap;
    int temp;
    for(int i = 0; i < size - 1; i++) {
        swap = false;
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = true;
            }
        }
        if(!swap) {
            break;
        }
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
    bubbleSort(array, size);
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
