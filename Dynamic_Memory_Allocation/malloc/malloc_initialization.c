#include <stdio.h>
#include <stdlib.h>

void main() {
    // Dynamic memory allocation using malloc
    // Allocating memory for an integer
    // malloc returns a void pointer
    // Casting it to int pointer
    int *ptr = (malloc(sizeof(int)));

    // Storing value at allocated memory
    *ptr = 42;    

    // Printing value and address
    printf("%d\n", *ptr);
    printf("%p\n", ptr);


    // Freeing allocated memory
    free(ptr);
}