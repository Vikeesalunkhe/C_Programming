#include <stdio.h>

int pointer_fun(int *ptr1, int *ptr2) {


    printf("Address of x : %p\n", ptr1);
    printf("Address of y : %p\n", ptr2);

    printf("value of x : %d\n", *ptr1);
    printf("value of y : %d\n", *ptr2);
    
    return 0;


}

void main() {

    int x = 200;
    int y = 100;

    int *ptr_x = &x;
    int *ptr_y = &y;

    pointer_fun(&x, &y);

    printf("%p : \n", ptr_x);
    printf("%p : \n", ptr_y);


}