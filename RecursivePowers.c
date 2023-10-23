#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int isOdd(int n) {
    return !isEven(n);
}

