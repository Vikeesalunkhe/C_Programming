#include <stdio.h>

void main() {

    int size;
    printf("Enter Array Size : ");
    scanf("%d", &size);

    int arr01[size];
    int arr02[size];

    for (int i = 0; i<size; i++) {

        printf("Enter Element in Array : ");
        scanf("%d", &(arr01[i]));
    }

    for (int i = 0; i<size; i++) {

        arr02[size-i-1] = arr01[i];
    }

    printf("Second Array Element is : ");

    for (int i = 0; i<size; i++) {

        printf(" %d |", arr02[i]);
    }
}