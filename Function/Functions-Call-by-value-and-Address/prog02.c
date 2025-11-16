#include <stdio.h>

void fun(int* x, int* y) {

    printf("Address of x : %p\n", x);
    printf("Addres of y : %p\n", y);

    printf("%d\n", *x);
    printf("%d\n", *y);
}


void main() {

    int x = 10;
    int y = 20;

    int *ptr1 = &x;
    int *ptr2 = &y;

    fun(ptr1, ptr2);
}