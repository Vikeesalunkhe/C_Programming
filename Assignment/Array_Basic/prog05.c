// Write a Program to create N number of Array, print product of odd elemnt of Array.

#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    int arr[size];
    int product = 1;

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully\n");

    for (int i = 0; i<size; i++) {

        if (arr[i] % 2 == 1) {

            product *= arr[i];
        }
    }

    printf("Product of Odd Element : %d\n", product);
}