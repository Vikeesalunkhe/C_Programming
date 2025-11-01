// Write a Program to Create an integer Array of N number, print where sum of even index element.

#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i<size; i++) {

        printf("Enter Element for array : ");
        scanf("%d", &(arr[i]));
    }

    int sum = 0;

    for (int i = 0; i<size; i++) {

        if (i % 2 == 0) {

            sum +=arr[i];
        }
    }

    printf("Sum of Even index Element is : %d\n", sum);
}