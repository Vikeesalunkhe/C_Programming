#include <stdio.h>
#include <stdlib.h>

void main() {

    int arr_size = 5;
    int *ptr = calloc(arr_size, sizeof(int));

    for (int i = 0; i<arr_size; i++ ){
        ptr[i] = i+1;
    }

    for (int i = 0; i<arr_size; i++ ){
        printf("Value at ptr[%d]: %d\n", i, ptr[i]);
    }

    free(ptr);
}