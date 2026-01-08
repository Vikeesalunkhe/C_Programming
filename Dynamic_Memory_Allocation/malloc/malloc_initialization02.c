#include <stdio.h>
#include <stdlib.h>

void main() {

    //pointer_type   poiter_name = (typecasting)malloc(size);
    int *ptr = (int *)(malloc(sizeof(int)));


    *ptr = 42;
    printf("%d\n", *ptr);
    printf("%p\n", ptr);
    free(ptr);
}