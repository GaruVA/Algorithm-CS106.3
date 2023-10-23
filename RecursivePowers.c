#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int isOdd(int n) {
    return !isEven(n);
}

int power(int n, int x) {
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 1/power(x, -n);
    }
    if(isOdd(n)) {
        return x * power(x, n - 1);
    }
    if(isEven(n)) {
        int halfpower = power(x, n / 2);
        return halfpower * halfpower;
    }
}

void displayPower(int n, int x) {
    printf("%d^%d = %d\n", n, x, power(n, x));
}
