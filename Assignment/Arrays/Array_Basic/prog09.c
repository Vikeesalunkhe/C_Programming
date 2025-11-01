//Write a Program to create integer N numbers of Array, print first index of divisible by 5.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    int arr[size];
    int index;

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully\n");

    for (int i = 0; i<size; i++) {

        if (arr[i] % 5 == 0) {

            index = i;
            break;
        }
    }

    printf("First index of divisible by 5 is : %d\n", index);
}