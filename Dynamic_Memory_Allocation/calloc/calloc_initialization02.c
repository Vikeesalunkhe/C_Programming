#include <stdio.h>
#include <stdlib.h>

void main() {

    int array_size = 5;
    int *ptr = calloc(array_size, sizeof(int));

    printf("Array initial values and array address : \n");
    for (int i = 0; i<array_size; i++) {
        printf("Address : %p , value : %d \n",&ptr[i], ptr[i]);
        ptr[i] = i + 1;

    }

    printf("Array initial values and array address : \n");
    for (int i = 0; i<array_size; i++) {
        printf("Address : %p , value : %d \n",&ptr[i], ptr[i]);

    }


}