// Write a program to create integer Array user give by size of array and enter array element, print even value of Array.

#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    int arr[size];

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully\n");

    printf("Even Element in Array is : \n");

    for (int i = 0; i<size; i++) {

        if (arr[i] % 2 == 0) {

            printf( "%d\n", arr[i]);
        }
    }
}