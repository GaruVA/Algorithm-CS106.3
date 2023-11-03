#include <stdio.h>
#include <stdlib.h>

int calculateGCD(int a, int b) {
    int temp;

    // Ensure non-negative values for a and b
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
