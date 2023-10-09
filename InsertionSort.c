#include <stdio.h>

void insert(int array[], int rightIndex, int value) {
    int i;
    for(i = rightIndex; i >= 0 && array[i] > value; i--) {
        array[i+1] = array[i];
    }
    array[i+1] = value;
}

void insertionSort(int array[], int size) {
}


int main() {

}
