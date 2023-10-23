#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    if (n < 0) {
        return 1.0 / (x * power(x, -(n + 1)));
    }
    if (isEven(n)) {
        double halfpower = power(x, n / 2);
        return halfpower * halfpower;
    } else {
        return x * power(x, n - 1);
    }
}

void displayPower(double x, int n) {
    if(n < 0){
        printf("%.0lf^%d = %.6lf\n", x, n, power(x, n));
    } else {
        printf("%.0lf^%d = %.0lf\n", x, n, power(x, n));
    }
}

int main() {
    displayPower(3, 0);
    displayPower(3, -1);
    displayPower(3, 2);
    displayPower(3, 3);
    return 0;
}
