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

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int gcd = calculateGCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}


