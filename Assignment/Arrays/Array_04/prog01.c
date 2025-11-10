// Write a program to create an integer array og N elements and print the prime numbers present in array.


#include <stdio.h>

void main() {

    int size;
    printf("Enter size of Array is : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Array Elemnt is : \n");

    for (int i = 0; i<size; i++) {

        scanf("%d", &(arr[i]));
    }

    printf("Prime Numbers Present in Array is : \n");

    for (int i = 0; i<size; i++) {
        int count = 0;

        for (int j = 1; j<=arr[i]; j++) {

            if (arr[i] % j == 0) {

                count+=1;
            } else {

            }
        }

        if (count == 2) {

            printf("%d\n", arr[i]);
        }
    }

}