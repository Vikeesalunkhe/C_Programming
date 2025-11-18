#include <stdio.h>

void fun() {
    printf("In fun\n");
}

void main() {

    void (*fun_ptr)() = fun;   //function pointer

    fun_ptr();   //function call
    printf("Address of function : %p\n", fun_ptr);
}