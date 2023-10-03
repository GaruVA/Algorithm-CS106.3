#include <stdio.h>

void insert(int array[], int rightIndex, int value) {
    int i;
    for(i = rightIndex; i >= 0 && array[i] > value; i--) {
        array[i+1] = array[i];
    }
    array[i+1] = value;
}


int main() {
    int array[] = {3, 5, 7, 11, 13, 2, 9, 6};
    insert(array, 4, 2);
    insert(array, 5, 9);
    insert(array, 6, 6);
}
