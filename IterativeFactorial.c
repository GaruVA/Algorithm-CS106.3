#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n ; i++) {
        result *= i;
    }
    return result;
}

int main() {
    printf("The value of 5! should be %d\n", 5*4*3*2*1);
    printf("The value of 5! is %d\n",factorial(5));
    printf("The value of 0! should be 1\n");
    printf("The value of 0! is %d\n", factorial(0));
}
