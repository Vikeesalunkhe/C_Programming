//Write a Program to create an interger N numbers of Array, print the Revers Array.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    int arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully \n");

    for (int i = size-1; i>=0; i--) {

        printf("%d\n", arr[i]);
    }

}