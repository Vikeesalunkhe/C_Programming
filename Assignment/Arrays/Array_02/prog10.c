////Write a Program to create an int Array, print Alternet reverse Elements.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    int arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter Array Elements for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully \n");

    for (int i = 0; i<size; i+=2) {

        if (i % 2 ==0 ) {
            
            printf(" %d |", arr[size-i-1]);

        }

    }

}