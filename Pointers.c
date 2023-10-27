#include <stdio.h>

/*
//Introduction to pointers
int main() {
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
}
*/

/*
//Working with pointers
int main() {
    int a = 10;
    int* p;
    p = &a;
    //Pointer Arithmetic
    printf("Address p is %d\n", p);
    printf("Value at address p is %d\n", *p);
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p + 1 is %d\n", p + 1);
    printf("Value at address p + 1 is %d\n", *(p + 1));
}
*/

/*
//Pointer types, pointer arithmetic, void pointers
int main() {
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
}
*/

/*
//Pointers to pointers
int main() {
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", **q);
    printf("%d\n", **r);
    printf("%d\n", ***r);
    ***r = 10;
    printf("x = %d\n", x);
    **q = *p + 2;
    printf("x = %d\n", x);
}
*/
/*
//Pointers as function arguments
//call by value
void Increment(int a) {
    a = a + 1;
    printf("Address of variable a in Increment = %d\n", &a);
    printf("a = %d\n", a);
}

int main() {
    int a = 10;
    Increment(a);
    printf("Address of variable a in main = %d\n", &a);
    printf("a = %d\n", a);
}

//call by reference
void Increment(int* p) {
    *p = (*p) + 1;
    printf("Address of variable a in Increment = %d\n", p);
    printf("a = %d\n", *p);
}

int main() {
    int a = 10;
    Increment(&a);
    printf("Address of variable a in main = %d\n", &a);
    printf("a = %d\n", a);
}
*/

/*
//Pointers and Arrays

Element at index i of array A -
    Address - &A[i] or (A + i)
    Value - A[i] or *(A + i)

int main() {
    int A[] = {2, 4, 5, 8, 1};
    int *p = A;
    for(int i = 0; i < 5; i++) {
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A + i));
    }
}
*/


