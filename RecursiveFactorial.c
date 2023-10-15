#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("The value of 5! should be %d\n", 5*4*3*2*1);
    printf("The value of 5! is %d\n",factorial(5));
    printf("The value of 0! should be 1\n");
    printf("The value of 0! is %d\n", factorial(0));
}
