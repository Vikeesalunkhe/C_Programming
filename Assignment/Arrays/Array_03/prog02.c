// Write a Program to cteate N numbers of interger Array, copy the element into another array in revers order, and print second array element.


#include <stdio.h>

void main() {

    int size;

    printf("Enter size of Array : ");
    scanf("%d", &size);
    int arr_01[size];
    int arr_02[size];
    
    for (int i = 0; i<size; i++) {

        printf("Enter array element for index %d is : ", i);
        scanf("%d", &(arr_01[i]));
        arr_02[size-i-1] = arr_01[i];
    }

    printf("Here is your second Array \n");

    for (int i = 0; i<size; i++) {

        printf("%d\n", arr_02[i]);


    }



}