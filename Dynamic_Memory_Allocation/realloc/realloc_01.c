#include <stdio.h>
#include <stdlib.h>

void main() {

    int arr_initial_size = 5;
    int *ptr = (int *)calloc(arr_initial_size, sizeof(int));

    for (int i = 0; i < arr_initial_size; i++) {
        ptr[i] = i + 1;
    }
    
    int arr_new_size = 10;

    // Reallocate memory
    ptr = (int *)realloc(ptr, arr_new_size * sizeof(int));

    for (int i = arr_initial_size; i < arr_new_size; i++) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < arr_new_size; i++) {
        printf("Value at ptr[%d]: %d\n", i, ptr[i]);
    }
    free(ptr);
}