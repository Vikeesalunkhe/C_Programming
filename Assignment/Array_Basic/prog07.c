// Write a Program to create integer N numbers of Array, print difference between sum of even element and odd element.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array Size id : %d\n", size);

    int arr[size];
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i<size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));
    }

    printf("Array Created Sucseccfully\n");

    for (int i = 0; i<size; i++) {

        if (i % 2 == 0) {

            evenSum += arr[i];
        } else {

            oddSum += arr[i];
        }
    }

    int diff = evenSum - oddSum;

    printf("Difference of Even index element and odd index element is : %d\n", diff);
}