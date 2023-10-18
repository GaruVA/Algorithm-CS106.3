#include <stdio.h>


int main() {
    /*
    //Introduction to pointers

    int a;
    int* p;
    p = &a;
    a = 5;
    printf("%d\n", p);
    printf("%d\n", &a);
    printf("%d\n", &p);
    printf("%d\n", *p);
    *p = 8;
    printf("%d\n", a);
    */

    /*
    //Working with pointers

    int a = 10;
    int* p;
    p = &a;
    //Pointer Arithmetic
    printf("Address p is %d\n", p);
    printf("Value at address p is %d\n", *p);
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p + 1 is %d\n", p + 1);
    printf("Value at address p + 1 is %d\n", *(p + 1));
    */

    /*
    //Pointer types, pointer arithmetic, void pointers

    int a = 1025;
    int* p;
    p = &a;
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", p + 1, *(p + 1));
    char *p0;
    p0 = (char*) p; //typecasting
    printf("Size of integer is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1));
    void *p1;
    p1 = p;
    printf("Address = %d", p1);
    */
}
