#include <stdio.h>

int indexOfMinimum(int array[],int size, int startIndex) {
    int minValue = array[startIndex];
    int minIndex = startIndex;
    for(int i = startIndex; i < size; i++) {
        if(array[i] < minValue) {
            minValue = array[i];
            minIndex = i;
        }
    }
    return minIndex;
};


int main() {
    int array[] = {18, 9, 66, 44, 6, 22, 14};
    int index = indexOfMinimum(array, 7, 5);
    printf("Index of Minimum: %d", index);
    return 0;
}
