#include <stdio.h>

int fun(int x, int y) {

    printf("Start fun\n");
    printf("%d\n", x);
    printf("%d\n", y);
    return x+y;
}

void main() {

    int num1 = 10;
    int num2 = 20;

    int (*fun_ptr)(int , int) = fun;

    int ret = fun_ptr(num1, num2);
    printf("Return value is : %d\n", ret);
}
