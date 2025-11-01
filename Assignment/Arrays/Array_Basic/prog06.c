//Write a program to Create integer N number of Array, print Sum of All Array Element.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    int arr[size];
    int sum = 0;

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully\n");

    for (int i = 0; i<size; i++) {

        sum += arr[i];

    }

    printf("Sum of All Elementd of an Array : %d\n", sum);
}