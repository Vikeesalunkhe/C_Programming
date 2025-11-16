#include <stdio.h>

//int* x  :     pointer declaration
//*x = 1000;    define/assign value

int fun(int* x, int* y) {

    printf("x is : %d\n", *x);
    printf("y is : %d\n", *y);
    *x = 100;
    *y = 200;


}


void main() {

    int x = 10;
    int y = 20;

    fun (&x, &y);

    printf("x is after fun call : %d\n", x);
    printf("y is after fun call : %d\n", y);
}