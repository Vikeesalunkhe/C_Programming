// Write a program to create Two integer Array and swap the elements of two array,


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


    printf("Swaped Array : ");
    int num;

    for (int i = 0; i<(size01); i++){

        int num = arr01[i];

        arr01[i] = arr02[i];
        arr02[i] = num;

    }

    printf("Array 01 : ");
    for (int i = 0; i<(size01); i++){

        printf(" %d |", arr01[i]);

    }

    printf("Array 02 : ");
    for (int i = 0; i<(size02); i++){

        printf(" %d |", arr02[i]);

    }


}