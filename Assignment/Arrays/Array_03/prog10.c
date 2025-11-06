// Write a program to create Two integer Array and printf sum of even index num of array 01 and sum of odd index of arrau 02


#include <stdio.h>

void main(){

    int size01;
    printf("Enter Size of Array 01 : ");
    scanf("%d", &size01);

    int arr01[size01];

    printf("Enter array 01 Element : \n");

    for (int i = 0; i<size01; i++) {

        scanf("%d", &(arr01[i]));
    }

    int size02;
    printf("Enter Size of Array 02 : ");
    scanf("%d", &size02);

    int arr02[size02];

    printf("Enter array 01 Element : \n");

    for (int i = 0; i<size02; i++) {

        scanf("%d", &(arr02[i]));
    }

    int evenIndexSum = 0;
    int oddIndexSum = 0;

    for (int i = 0; i<(size01); i++){

        if (i % 2 == 0) {
            evenIndexSum += arr01[i];
        }
    }

    for (int i = 0; i<(size02); i++){

        if (i % 2 == 1) {
            oddIndexSum += arr02[i];
        }
    }

    printf("Sum of Even index of Array 01 : %d\n", evenIndexSum);
    printf("Sum of odd Index of Array 02 : %d\n", oddIndexSum);






}