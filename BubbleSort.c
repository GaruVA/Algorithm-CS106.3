#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int size) {
    bool swap;
    int temp;
    for(int i = 0; i < size - 1; i++) {
        swap = false;
        for(int j = 0; j < size - i - 1; i++) {
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
}
